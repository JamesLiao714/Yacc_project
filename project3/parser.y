%{

#include <iostream>
#include "symbols.hpp"
#include "lex.yy.cpp"
#include "codeGen.hpp"

#define Trace(t) if (Opt_P) if (Opt_P) cout<< t << endl;
 


string filename;
ofstream out;

int method_num = 0;
int main_num = 0;

void yyerror(string s);

SymbolTableList symbols;
vector<vector<idInfo> > functions;

%}

/* yylval */
%union {
  int ival;
  double dval;
  bool bval;
  char cval;
  string *sval;
  int type;
  idInfo* info;
}

/* tokens */
/*two char token*/
%token LE GE EQ NEQ AND OR 
/*keyword*/
%token BOOL BREAK CHAR CASE CLASS CONTINUE DEF DO ELSE EXIT FLOAT FOR IF INT NUL OBJECT PRINT PRINTLN REPEAT RETURN STRING TO TYPE VAL VAR WHILE READ FALSE TRUE
/*value*/
%token <sval> ID
%token <bval> BOOL_CONST
%token <ival> INT_CONST
%token <dval> REAL_CONST /*float*/
%token <sval> STR_CONST
%token <cval> CHAR_CONST


/*return type for non-terminal */
%type <info> const_value expression func_invocation
%type <type> var_type opt_ret_type 

/* precedence of operator*/
%left OR
%left AND
%left '!'
%left '<' LE EQ GE '>' NEQ
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%start program

%%

program                 : OBJECT ID 
                        {
                          ProgramStart();
                          Trace("program(object)");
                        }
                        '{'opt_var_dec opt_func_dec'}'
                        {
                          if(main_num == 0){
                              yyerror("no main");;
                          }
                          symbols.pop();

                          ProgramEnd();
                        }
                        ;

/* Variable&constant declarations */


opt_var_dec             : var_dec opt_var_dec
                        | const_dec opt_var_dec
                        | 
                        ;


const_dec               : VAL ID ':' var_type '=' expression
                        {
                          Trace("constant declaration(type)");

                          if (!isConst(*$6)) yyerror("expression != constant value"); /*const check*/
                          if ($4 != $6->type) yyerror("type not match"); /*type parameter check*/

                          $6->flag = constVariableFlag;
                          $6->init = true;
                          if (symbols.insert(*$2, *$6) == -1) yyerror("constant redefinition"); /* symbol check */
                        }
                        | VAL ID '=' expression 
                        {
                          Trace("constant declaration");

                          if (!isConst(*$4)) yyerror("expression not constant value"); /* constant check */

                          $4->flag = constVariableFlag;
                          $4->init = true;
                          if (symbols.insert(*$2, *$4) == -1) yyerror("constant redefinition"); /* symbol check */
                        }
                        ;

var_dec                 : VAR ID ':' var_type '=' expression 
                        {
                          Trace("variable declaration(VAR ID ':' var_type '=' expression )");

                          if (!isConst(*$6)) yyerror("expression not constant value"); /* constant check */
                          if ($4 != $6->type) yyerror("type not match"); /* type check */

                          $6->flag = variableFlag;
                          $6->init = true;
                          if (symbols.insert(*$2, *$6) == -1) yyerror("variable redefinition"); /* symbol check */

                          if ($4 == intType || $4 == boolType) {
                            int idx = symbols.getIndex(*$2);
                            int val = getValue(*$6);
                            if (idx == -1) {
                              GlobalVarWithVal(*$2, val);
                            }
                            else if (idx >= 0) {
                              LocalVarWithVal(idx, val);
                            }
                          }

                        }
                        | VAR ID ':' var_type
                        {
                          Trace("variable declaration ( VAR ID ':' var_type)");

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $4;
                          info->init = false;
                          if (symbols.insert(*$2, *info) == -1) yyerror("variable redefinition"); /* symbol check */

                          if ($4 == intType || $4 == boolType) {
                            int idx = symbols.getIndex(*$2);
                            if (idx == -1) {
                              GlobalVar(*$2);
                            }
                          }
                        }
                        | VAR ID '=' expression 
                        {
                          Trace("variable declaration (VAR ID '=' expression)");

                          if (!isConst(*$4)) yyerror("expression not constant value"); /* constant check */

                          $4->flag = variableFlag;
                          $4->init = true;
                          if (symbols.insert(*$2, *$4) == -1) yyerror("variable redefinition"); /* symbol check */

                          int idx = symbols.getIndex(*$2);
                          int val = getValue(*$4);
                          if (idx == -1) {
                            GlobalVarWithVal(*$2, val);
                          }
                          else if (idx >= 0) {
                            LocalVarWithVal(idx, val);
                          }

                        }
                        | VAR ID 
                        {
                          Trace("variable declaration(VAR ID )");

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = intType;
                          info->init = false;
                          if (symbols.insert(*$2, *info) == -1) yyerror("variable redefinition"); /* symbol check */

                          int idx = symbols.getIndex(*$2);
                          if (idx == -1) {
                            GlobalVar(*$2);
                          }
                        }
                        | VAR ID ':' var_type '[' expression ']' 
                        {
                          Trace("array declaration");

                          if (!isConst(*$6)) yyerror("array size not constant");
                          if ($6->type != intType) yyerror("array size not integer");
                          if ($6->value.ival < 1) yyerror("array size < 1");
                          if (symbols.insert(*$2, $4, $6->value.ival) == -1) yyerror("variable redefinition");
                        }
                        ;

/* variable data type */
var_type                : INT
                        {
                          $$ = intType;
                        }
                        | CHAR
                        {
                          $$ = charType;
                        }
                        | FLOAT
                        {
                          $$ = realType;
                        }
                        | BOOL
                        {
                          $$ = boolType;
                        }
                        | STRING
                        {
                          $$ = strType;
                        }
                        ;


const_value             : INT_CONST
                        {
                          $$ = intConst($1);
                        }
                        | REAL_CONST
                        {
                          $$ = realConst($1);
                        }
                        | BOOL_CONST
                        {
                          $$ = boolConst($1);
                        }
                        | STR_CONST
                        {
                          $$ = strConst($1);
                        }
                        | CHAR_CONST
                        {
                          $$ = charConst($1);
                        }
                        ;


/* one or more method declaration*/
opt_func_dec            : func_dec opt_func_dec
                        | func_dec 
                        ;

/* mehod declaration */
func_dec                : DEF ID
                        {
                          Trace("method declaration");
                          idInfo *info = new idInfo();
                          info->flag = functionFlag;
                          info->init = false;
                          if (symbols.insert(*$2, *info) == -1) yyerror("function redefinition"); /* symbol check */
                          symbols.push();
                        }
                          '(' opt_args ')' opt_ret_type '{' 
                        {
                          if (*$2 == "main") {    
                              
                            MainStart();
                            main_num++; 
                          }
                          else {
                            
                            FuncStart(*symbols.lookup(*$2));
                          
                          }
                        }
                          opt_var_dec opt_statement '}'
                        {
                          
                          if (symbols.lookup(*$2)->type == voidType) {
                            VoidFuncEnd();
                            
                          }
                          else {
                            BlockEnd();
                            
                          }

                           method_num++;                       
                           symbols.pop();
                        }
                        ;
                    

/* zero or more arguments */
opt_args                : args
                        | 
                        ;

/* arguments */
args                    : arg ',' args
                        | arg
                        ; 

/* argument */
arg                     : ID ':' var_type
                        {
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $3;
                          info->init = false;
                          if (symbols.insert(*$1, *info) == -1) yyerror("variable redefinition");
                          symbols.addFuncArg(*$1, *info);
                        }
                        ;

/* optional return type */
opt_ret_type            : ':' var_type
                        {
                          symbols.setFuncType($2);
                        }
                        | 
                        {
                          symbols.setFuncType(voidType);
                        }
                        ;

/* one or more statements */
opt_statement           : statement opt_statement
                        | statement 
                        ;

/* ================================statement============================== */
statement               : simple
                        | block
                        | conditional
                        | loop
                        | func_invocation
                        {
                            if($1 != NULL) yyerror("procedure invocation should not have return value"); 
                        }
                        ;

simple                  : ID '=' expression
                        {
                          Trace(" variable assignment");
                          idInfo *info = symbols.lookup(*$1);
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (info->flag == constVariableFlag) yyerror("can't assign to constant"); /* constant check */
                          if (info->flag == functionFlag) yyerror("can't assign to function"); /* function check */
                          if (info->type != $3->type) yyerror("type not match"); /* type check */

                           if (info->type == intType || info->type == boolType) {
                            int idx = symbols.getIndex(*$1);
                            if (idx == -1) 
                              SetGlobalVar(*$1);
                            else 
                              SetLocalVar(idx);
                          }
                        }
                        | ID '[' expression ']' '=' expression 
                        {
                          Trace("Array assignment");

                          idInfo *info = symbols.lookup(*$1);
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (info->flag != variableFlag) yyerror("not a variable"); /* variable check */
                          if (info->type != arrayType) yyerror("not a array"); /* type check */
                          if ($3->type != intType) yyerror("index not integer"); /* index type check */
                          if ($3->value.ival >= info->value.aval.size() || $3->value.ival < 0) yyerror("index out of range"); /* index range check */
                          if (info->value.aval[0].type != $6->type) yyerror("type not match"); /* type check */
                        }
                        | 
                        {
                          PrintStart();
                        }
                          PRINT  expression 
                        {
                          Trace("print expression");

                          if ($3->type == strType) 
                            PrintStr();
                          else 
                            PrintInt();
                        }
                        |
                        {
                          PrintStart();
                        } 
                        PRINTLN expression
                        {
                          Trace("println(expression)");
                          if ($3->type == strType) 
                            PrintlnStr();
                          else 
                            PrintlnInt();
                        }
                        | RETURN expression 
                        {
                          Trace("return expression");
                          IReturn();        
                        }
                        | READ ID
                        {
                          idInfo *info = symbols.lookup(*$2);
                          if (info == NULL) yyerror("symbol not found(read)"); /* declaration check */
                          Trace("READ ID")
                        }
                        | RETURN 
                        {
                          Trace("return");
                          Return();
                        }
                        ;
			                  

block                   : 
                       '{'
                        {
                          Trace("----block start----");
                          symbols.push();
                        }
                          opt_var_dec opt_statement
                       '}'
                        {
                          Trace("----block end----");
                          
                          symbols.pop();
                        }
                        ;


conditional             : IF '(' expression ')' ifStart B_or_S ELSE 
                        {
                          Else();
                        }
                          B_or_S
                        {
                          Trace(" if else");

                          if ($3->type != boolType) yyerror("condition type error (if_else)");
                          IfElseEnd();
                        }
                        | IF '(' expression ')' ifStart B_or_S
                        {
                          Trace(" if");

                          if ($3->type != boolType) yyerror("condition type error (if)");
                          IfEnd();
                        }
                        ;

ifStart                 :
                        {
                          IfStart();
                        }

/*block or simple*/
B_or_S                 : simple
                        | block
                        ;



/* loop */
loop                    : WHILE '('
                        {
                          WhileStart();
                        }
                         expression 
                        {
                          //if ($3->type != boolType) yyerror("while condition type error");
                          WhileCond();
                        }
                         ')' B_or_S
                        {
                          Trace("while loop");
                          WhileEnd();
                        }
                        | FOR '('
                        {
                           ForStart();
                        }
                         ID '<' '-' INT_CONST TO INT_CONST
                        {
                          ForCond();
                        } 
                        ')' B_or_S
                        {
                          ForEnd();
                          Trace("FOR loop");
                          idInfo *info = symbols.lookup(*$4);
                          if (info == NULL) yyerror("undeclared indentifier(for)"); /* declaration check */
                          if (info->flag != variableFlag) yyerror("not a variable(for)"); /* function check */
                          if(info->type != intType) yyerror("variable should be int(for)");                         
                        }
                        ;

              


/* function invocation */
func_invocation         : ID
                        {
                          functions.push_back(vector<idInfo>());
                        }
                          '(' opt_comma_separated ')'
                        {
                          Trace(" function invocation");

                          idInfo *info = symbols.lookup(*$1);
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          if (info->flag != functionFlag) yyerror("not a function"); /* function check */

                          vector<idInfo> para = info->value.aval;
                          if (para.size() != functions[functions.size() - 1].size()) yyerror("parameter size not match"); /* parameter size check */

                          for (int i = 0; i < para.size(); ++i) {
                            if (para[i].type != functions[functions.size() - 1].at(i).type) yyerror("parameter type not match"); /* parameter type check */
                          }

                          CallFunc(*info);
                          $$ = info;
                          functions.pop_back();
                        }
                        ;

/* optional comma-separated expressions */
opt_comma_separated     : comma_separated
                        | /* zero */
                        ;

/* comma-separated expressions */
comma_separated         : func_expression ',' comma_separated
                        | func_expression /* func_expression */
                        ;

/* function expression */
func_expression         : expression
                        {
                          functions[functions.size() - 1].push_back(*$1);
                        }

/* expression */
expression              : ID
                        {
                          idInfo *info = symbols.lookup(*$1);
                          if (info == NULL) yyerror("undeclared indentifier"); /* declaration check */
                          $$ = info;

                          if (!symbols.isGlobal() && isConst(*info)) {
                            if (info->type == strType) 
                              ConstStr(info->value.sval);
                            else if (info->type == intType || info->type == boolType) ConstInt(getValue(*info));
                          }
                          else if (info->type == intType || info->type == boolType) {
                            int idx = symbols.getIndex(*$1);
                            if (idx == -1) 
                              GetGlobalVar(*$1);
                            else 
                              GetLocalVar(idx);
                          }
                        }
                        | const_value
                        {
                            if (!symbols.isGlobal()) 
                            {
                              if ($1->type == strType) 
                                ConstStr($1->value.sval);
                              else if ($1->type == intType || $1->type == boolType)
                                ConstInt(getValue(*$1));
                            }
                            $$ = $1;
                        }
                        | ID '[' expression ']'
                        {
                          idInfo *info = symbols.lookup(*$1);
                          if (info == NULL) yyerror("undeclared identifier");
                          if (info->type != arrayType) yyerror("not array type");
                          if ($3->type != intType) yyerror("invalid index");
                          if ($3->value.ival >= info->value.aval.size()) yyerror("index out of range");
                          $$ = new idInfo(info->value.aval[$3->value.ival]);
                        }
                        | func_invocation
                        | '-' expression %prec UMINUS
                        {
                          Trace("-expression");

                          if ($2->type != intType && $2->type != realType) yyerror("operator error"); /* operator check */
                          
                          if($2 -> type == intType)
                          {
                            $2 -> value.ival *= -1;
                          }
                          else
                          {
                            $2 -> value.dval *= -1;
                          }
                          $$ = $2;

                          if ($2->type == intType) 
                          {
                            //cout << "$2->type is" << $2->type <<endl;
                            Operator('m');
                          }
                           
                        }
                        | expression '*' expression
                        {
                          Trace("expression * expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */
                          
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;

                          if($1 -> type == intType)
                          {
                            info->value.ival = $1 -> value.ival * $3 -> value.ival;
                          }
                          else
                          {
                             info->value.dval = $1 -> value.dval * $3 -> value.dval;
                          }
                          $$ = info;

                          if ($1->type == intType) 
                            Operator('*');
                        }
                        | expression '/' expression
                        {
                          Trace("expression / expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;
                          if($1 -> type == intType)
                          {
                            info->value.ival = $1 -> value.ival / $3 -> value.ival;
                          }
                          else
                          {
                             info->value.dval = $1 -> value.dval / $3 -> value.dval;
                          }
                          $$ = info;
                          if ($1->type == intType) 
                            Operator('/');
                        }
                        | expression '%' expression
                        {
                          Trace("expression % expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;
                          $$ = info;

                          if ($1->type == intType) Operator('%');
                        }
                        | expression '+' expression
                        {
                          Trace("expression + expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;
                          if($1 -> type == intType)
                          {
                            info->value.ival = $1 -> value.ival + $3 -> value.ival;
                          }
                          else
                          {
                             info->value.dval = $1 -> value.dval + $3 -> value.dval;
                          }
                          $$ = info;
                          
                          if ($1->type == intType) 
                            Operator('+');
                        }
                        | expression '-' expression
                        {
                          Trace("expression - expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = $1->type;
                          if($1 -> type == intType)
                          {
                            info->value.ival = $1 -> value.ival - $3 -> value.ival;
                          }
                          else
                          {
                             info->value.dval = $1 -> value.dval - $3 -> value.dval;
                          }
                          $$ = info;

                          if ($1->type == intType) 
                            Operator('-');
                        }
                        | expression '<' expression
                        {
                          Trace("expression < expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1 -> type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival < $3 -> value.ival;
                          }
                          else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval < $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval < $3 -> value.dval;
                          }
                          $$ = info;

                          if ($1->type == intType) CondOp(IFLT);
                        }
                        | expression LE expression
                        {
                          Trace("expression <= expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival <= $3 -> value.ival;
                          }
                           else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval <= $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval <= $3 -> value.dval;
                          }
                          $$ = info;

                          if ($1->type == intType) CondOp(IFLE);
                        }
                        | expression EQ expression
                        {
                         
                          Trace("expression == expression");
                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                    
                          
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival == $3 -> value.ival;
                            
                          }
                          else if($1 -> type == boolType)
                          {
                        
                            info -> value.bval = $1 -> value.bval == $3 -> value.bval;
                          } 
                          else
                          {
                             info->value.bval = $1 -> value.dval == $3 -> value.dval;
                          }
                          

                          if ($1->type == intType || $1->type == boolType) CondOp(IFEQ);
                          $$ = info;
                        }
                        | expression GE expression
                        {
                          Trace("expression >= expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1->type!= boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival >= $3 -> value.ival;
                          }
                           else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval >= $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval >= $3 -> value.dval;
                          }
                          $$ = info;

                          if ($1->type == intType) CondOp(IFGE);
                        }
                        | expression '>' expression
                        {
                          Trace("expression > expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != intType && $1->type != realType && $1->type != boolType) yyerror("operator error"); /* operator check */
                        
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {

                            info->value.bval = $1 -> value.ival > $3 -> value.ival;
                            
                          }
                          else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval > $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval > $3 -> value.dval;
                          }                          
                          $$ = info;

                          if ($1->type == intType) CondOp(IFGT);
                        }
                        | expression NEQ expression
                        {
                          Trace("expression != expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                        
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          if($1 -> type == intType)
                          {
                            info->value.bval = $1 -> value.ival != $3 -> value.ival;
                          }
                           else if($1 -> type == boolType)
                          {
                            info -> value.bval = $1 -> value.bval != $3 -> value.bval;
                          }
                          else
                          {
                             info->value.bval = $1 -> value.dval != $3 -> value.dval;
                          }
                          $$ = info;

                          if ($1->type == intType || $1->type == boolType) CondOp(IFNE);

                        }
                        | '!' expression
                        {
                          Trace("!expression");

                          if ($2->type != boolType) yyerror("operator error"); /* operator check */

                          $2 -> value.bval = !$2 -> value.bval;
    
                          $$ = $2;

                          if ($2->type == boolType) Operator('!');
                        }
                        | expression AND expression
                        {
                          Trace("expression && expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
                          if ($1->type != boolType) yyerror("operator error"); /* operator check */

                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = $1-> value.bval && $3 -> value.bval;
                          $$ = info;

                          if ($1->type == boolType) Operator('&');
                        }
                        | expression OR expression
                        {
                          Trace("expression || expression");

                          if ($1->type != $3->type) yyerror("type not match"); /* type check */
        
                          if ($1->type != boolType) yyerror("operator error"); /* operator check */
             
                          idInfo *info = new idInfo();
                          info->flag = variableFlag;
                          info->type = boolType;
                          info -> value.bval = $1-> value.bval && $3 -> value.bval;
                          $$ = info;

                          if ($1->type == boolType) Operator('|');
                        }
                        | '(' expression ')'
                        {
                          $$ = $2;
                        }             
                        ;

%%

void yyerror(string s) {
  cerr << "line " << linenum << ": " << s << endl;
  exit(1);
}

int main(int argc, char **argv) {
  yyin = fopen(argv[1], "r");
  string source = string(argv[1]);
  int dot = source.find(".");
  filename = source.substr(0, dot);
  out.open(filename + ".jasm");

  yyparse();
  return 0;
}
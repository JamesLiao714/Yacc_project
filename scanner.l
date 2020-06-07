%{
#include "y.tab.hpp"

#define MAX_LINE_LENG 256
#define LIST strcat(buf, yytext)
#define token(t) { LIST; if(Opt_T) printf("<%s>\n", #t); }
#define tokenChar(t) { LIST; if(Opt_T) printf("<'%c'>\n", t); }
#define tokenInteger(t,i) { LIST; if(Opt_T) printf("<%s: %d>\n", #t, i); }
#define tokenString(t,s) { LIST; if(Opt_T) printf("<%s: %s>\n", #t, s); }
using namespace std;

int Opt_T = 0;
int Opt_S = 0;
int linenum = 1;
char buf[MAX_LINE_LENG];

%}

delimiters              ([,:.;()[\]{}])
arithmetic              ([-+*/%!])
identifier              ([A-Za-z_][0-9A-Za-z_]*)
digits                  ([0-9]+)
integer                 ({digits}) 
relational              ([<>!=])
real                    ([-+]?{digits}\.{digits}?([Ee](-+)?{digits})?)
string                  (\"(\"\"|[^"\n])*\")
char                    \'([A-Za-z0-9])\'


%x COMMENT COMMENT2

%%

{delimiters}  |   
{arithmetic}  | 
{relational}            { tokenChar(yytext[0]); return yytext[0]; }



 /* two-character token */
"<="                    { token('<='); return LE; }
">="                    { token('>='); return GE; }
"=="                    { token('=='); return EQ; }
"!="                    { token('!='); return NEQ; }
"&&"                    { token('&&'); return AND; }
"||"                    { token('||'); return OR; }


 /* keyword */
"boolean"               { token(BOOLEAN); return BOOL; }
"break"                 { token(BREAK); return BREAK; }
"char"                  { token(CHAR);  return CHAR; }
"case"                  { token(CASE);  return CASE; }
"class"                 { token(CLASS); return CLASS; }
"continue"              { token(CONTINUE); return CONTINUE; }
"def"                   { token(DEF);  return DEF; }
"do"                    { token(DO);   return DO; }
"else"                  { token(ELSE); return ELSE; }
"exit"                  { token(EXIT); return EXIT; }

"float"                 { token(FLOAT); return FLOAT; }
"for"                   { token(FOR);  return FOR; }
"if"                    { token(IF);   return IF; }
"int"                   { token(INT);  return INT; }
"null"                  { token(NULL); return NUL;}
"object"                { token(OBJECT);  return OBJECT; }
"print"                 { token(PRINT);   return PRINT; }
"println"               { token(PRINTLN); return PRINTLN; }
"repeat"                { token(REPEAT); return REPEAT; }
"return"                { token(RETURN); return RETURN; }
"string"                { token(STRING); return STRING; }
"to"                    { token(TO);    return TO; }

"type"                  { token(TYPE);  return TYPE; }
"val"                   { token(VAL);   return VAL; }
"var"                   { token(VAR);   return VAR; }
"while"                 { token(WHILE); return WHILE; }
"read"                  { token(READ);  return READ;}


"false"                 { token(FALSE);
                          yylval.bval = false;
                          return BOOL_CONST;
                        }
"true"                  { token(TRUE);
                          yylval.bval = true;
                          return BOOL_CONST;
                        }


{integer}               {
                           tokenInteger(INTEGER, atoi(yytext));
                           yylval.ival = atoi(yytext);
                           return INT_CONST;
                        }

{identifier}            {
                          tokenString(id, yytext);
                          yylval.sval = new string(yytext);
                          return ID;
                        }

{real}                  {
                          tokenString(REAL, yytext);
                          yylval.dval = atof(yytext);
                          return REAL_CONST;
                        }
{char}                  {
                           tokenString(CHAR, yytext);
                           yylval.cval = yytext[1];
                           return CHAR_CONST;
                        }
{string}                {
                          char s[MAX_LINE_LENG] = {0};
                          int idx = 0;
                          for (int i = 1; i < yyleng - 1; ++i) {
                            if (yytext[i] == '"') ++i;
                            s[idx++] = yytext[i];
                          }
                          tokenString(STRING, s);
                          yylval.sval = new string(s);
                          return STR_CONST;
                        }

 

  /* comment */

"/*"                    {
                          LIST;
                          BEGIN COMMENT; 
                        }
 /*discard comment*/

<COMMENT>"*/"           {
                          LIST;
                          BEGIN INITIAL;
                        }

<COMMENT>.              {
                          LIST;
                        }

"//"                    {
                          LIST;
                          BEGIN COMMENT2; 
                        }
<COMMENT2>\n            {
                          LIST;
                          if(Opt_S) printf("%d: %s", linenum, buf);
                          linenum++;
                          buf[0] = '\0';
                          BEGIN INITIAL;
                        }
                      
<COMMENT2>.           {
                          LIST;
                        }


\n                      {
                          LIST;
                          if(Opt_S) printf("%d: %s", linenum, buf);
                          linenum++;
                          buf[0] = '\0';
                        }
                        

[ \t]*                  { LIST; }

.                       {
                          LIST;
                          if(Opt_S) printf("%d: %s", linenum, buf);
                          printf("bad character:'%s'\n",yytext);
                          exit(-1);
                        }





%%
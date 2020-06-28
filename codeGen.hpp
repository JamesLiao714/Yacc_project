//prevent redefinition
#pragma once

#include <iostream>
#include <fstream>
#include <stack>
#include "symbols.hpp"
//extern
extern string filename;
extern ofstream out; 
using namespace std;
//for conditional jump
enum condition{
  IFLT,
  IFGT,
  IFLE,
  IFGE,
  IFEQ,
  IFNE
};
//count
struct Label {
  int count;
  int loop_flag;
  Label(int num)
  {
    count = num;
    loop_flag = -1;
  };
};

class LabelManager{
  private:
    int labelCount;
  public:
    stack<Label> lStack;
    LabelManager()
    {
      labelCount = 0;
    };
    void pushNLabel(int n)
    {
      lStack.push(Label(labelCount));
      labelCount += n;
    };
    void NLabel(int n)
    {
      lStack.top().count += n;
      labelCount += n;
    };
    void popLabel()
    {
      lStack.pop();
    };
    int getLabel(int n)
    {
      return lStack.top().count + n;
    };
    int getLable()
    {
      return labelCount++;
    };
    int getFlag()
    {
      return lStack.top().loop_flag;
    };
};
/*
void ProgramStart();
void ProgramEnd();
void GlobalVar(string id);
void GlobalVarWithVal(string id, int val);
void LocalVarWithVal(int idx, int val);
void ConstStr(string str);
void ConstInt(int val);
void GetGlobalVar(string id);
void GetLocalVar(int idx);
void SetGlobalVar(string id);
void SetLocalVar(int idx);
void Operator(char op);
void CondOp(int op);
void MainStart();
void FuncStart(idInfo info);
void VoidFuncEnd();
void PrintStart2();
void PrintStart();
void PrintStr();
void PrintInt();
void PrintlnStr();
void PrintlnInt();
void IReturn();
void Return();
void CallFunc(idInfo info);
void BlockEnd();
void IfStart();
void Else();
void IfEnd();
void IfElseEnd();
void WhileStart();
void WhileCond();
void WhileEnd();
void ForStart();
void ForCond();
void ForEnd();
*/

//=============================label managing=======================
LabelManager lm;

//================code generation=====================
//================1.initializtion======================
void ProgramStart()
{
  cout << "class " << filename << endl << "{" << endl;
  out << "class " << filename << endl << "{" << endl;
}

void ProgramEnd()
{
  cout << "}" << endl;
  out << "}" << endl;
}


//================2.Declarations for Variables and Constants======================
void GlobalVar(string id)
{
  cout << "\tfield static int " << id << endl;
  out << "\tfield static int " << id << endl;
}

void GlobalVarWithVal(string id, int val)
{
  cout << "\tfield static int " << id << " = " << val << endl;
  out << "\tfield static int " << id << " = " << val << endl;
}

void LocalVarWithVal(int idx, int val)
{
  cout << "\t\tistore " << idx << endl;
  out << "\t\tistore " << idx << endl;
}

void ConstStr(string str)
{
  cout << "\t\tldc \"" << str << "\"" << endl;

  out << "\t\tldc \"" << str << "\"" << endl;
}

void ConstInt(int val)
{
  cout << "\t\tsipush " << val << endl;
  out << "\t\tsipush " << val << endl;
}

void GetGlobalVar(string id)
{
  cout << "\t\tgetstatic int " << filename << "." << id << endl;
  out << "\t\tgetstatic int " << filename << "." << id << endl;
}

void GetLocalVar(int idx)
{
  cout << "\t\tiload " << idx << endl;
  out << "\t\tiload " << idx << endl;
}

void SetGlobalVar(string id)
{
  cout << "\t\tputstatic int " << filename << "." << id << endl;
  out << "\t\tputstatic int " << filename << "." << id << endl;
}

void SetLocalVar(int idx)
{
  cout << "\t\tistore " << idx << endl; 
  out << "\t\tistore " << idx << endl;
}
//================operator======================
void Operator(char op)
{
  switch (op) {
    case 'm': out << "\t\tineg" << endl; cout << "\t\tineg" << endl; break;
    case '*': out << "\t\timul" << endl; cout << "\t\timul" << endl; break;
    case '/': out << "\t\tidiv" << endl; cout << "\t\tidiv" << endl; break;
    case '+': out << "\t\tiadd" << endl; cout << "\t\tiadd" << endl; break;
    case '-': out << "\t\tisub" << endl; cout << "\t\tisub" << endl; break;
    case '!': out << "\t\tldc 1" << endl << "\t\tixor" << endl; cout << "\t\tldc 1" << endl << "\t\tixor" << endl; break;
    case '&': out << "\t\tiand" << endl; cout << "\t\tiand" << endl; break;
    case '|': out << "\t\tior" << endl; cout << "\t\tior" << endl; break;
    case '%': out << "\t\tirem" << endl; cout << "\t\tirem" << endl; break;
  }
}

void CondOp(int op){
  out << "\t\tisub" << endl;
  cout << "\t\tisub" << endl;
  int lb1 = lm.getLable();
  int lb2 = lm.getLable();
  switch (op) {
    case IFLT: out << "\t\tiflt"; cout << "\t\tiflt"; break;
    case IFGT: out << "\t\tifgt"; cout << "\t\tifgt"; break;
    case IFLE: out << "\t\tifle"; cout << "\t\tifle"; break;
    case IFGE: out << "\t\tifge"; cout << "\t\tifge"; break;
    case IFEQ: out << "\t\tifeq"; cout << "\t\tifeq"; break;
    case IFNE: out << "\t\tifne"; cout << "\t\tifne"; break;
  }
  out << " L" << lb1 << endl;
  cout << " L" << lb1 << endl;

  out << "\t\ticonst_0" << endl;
  cout << "\t\ticonst_0" << endl;

  out << "\t\tgoto L" << lb2 << endl;
  cout << "\t\tgoto L" << lb2 << endl;
  
  out <<  "L" << lb1 << ":" << endl;
  cout << "L" << lb1 << ":" << endl;

  out << "\t\ticonst_1" << endl;
  cout << "\t\ticonst_1" << endl;
  
  out << "L" << lb2 << ":" << endl;
  cout << "L" << lb2 << ":" << endl;
  
}
//================main=======================
void MainStart()
{
  out << "\tmethod public static void main(java.lang.String[])" << endl;
  out << "\tmax_stack 15" << endl;
  out << "\tmax_locals 15" << endl << "\t{" << endl;

  cout << "\tmethod public static void main(java.lang.String[])" << endl;
  cout << "\tmax_stack 15" << endl;
  cout << "\tmax_locals 15" << endl << "\t{" << endl;
}
//================method======================
void FuncStart(idInfo info)
{
  out << "\tmethod public static ";
  out << ((info.type == voidType)? "void" : "int");
  out << " " + info.id + "(";
  for (int i = 0; i < info.value.aval.size(); i++) {
    if (i != 0) out << ", ";
    out << "int";
  }
  out << ")" << endl;
  out << "\tmax_stack 15" << endl;
  out << "\tmax_locals 15" << endl << "\t{" << endl;

  cout << "\tmethod public static ";
  cout << ((info.type == voidType)? "void" : "int");
  cout << " " + info.id + "(";
  for (int i = 0; i < info.value.aval.size(); i++) {
    if (i != 0) cout << ", ";
    cout << "int";
  }
  cout << ")" << endl;
  cout << "\tmax_stack 15" << endl;
  cout << "\tmax_locals 15" << endl << "\t{" << endl;
  /*
  for (int i = 0; i < info.value.aval.size(); i++) {
    out << "\t\tiload " << i << endl;
  }
  */
}

void VoidFuncEnd()
{
  out << "\t\treturn" << endl << "\t}" << endl;
  cout << "\t\treturn" << endl << "\t}" << endl;
}
//================print======================
void PrintStart()
{
  out << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
  cout << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
}

void PrintStart2()//
{
  out << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
  cout << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
}

void PrintStr()
{
  out << "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)" << endl;
  cout << "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)" << endl;
}

void PrintInt()
{
   cout << "\t\tinvokevirtual void java.io.PrintStream.print(int)" << endl;
  out << "\t\tinvokevirtual void java.io.PrintStream.print(int)" << endl;
 
}

void PrintlnStr()
{
  out << "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)" << endl;
  cout << "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)" << endl;
}

void PrintlnInt()
{
  out << "\t\tinvokevirtual void java.io.PrintStream.println(int)" << endl;
  cout << "\t\tinvokevirtual void java.io.PrintStream.println(int)" << endl;
}
//================return======================
void IReturn()
{
  out << "\t\tireturn" << endl;
  cout << "\t\tireturn" << endl;
}

void Return()
{
  out << "\t\treturn" << endl;
  cout << "\t\treturn" << endl;
}
//================method invocation======================
void CallFunc(idInfo info)
{
  out << "\t\tinvokestatic ";
  out << ((info.type == voidType)? "void" : "int");
  out << " " + filename + "." + info.id + "(";
  for (int i = 0; i < info.value.aval.size(); ++i) {
    if (i != 0) out << ", ";
    out << "int";
  }
  out << ")" << endl;

  cout << "\t\tinvokestatic ";
  cout << ((info.type == voidType)? "void" : "int");
  cout << " " + filename + "." + info.id + "(";
  for (int i = 0; i < info.value.aval.size(); ++i) {
    if (i != 0) cout << ", ";
    cout << "int";
  }
  cout << ")" << endl;
}
//================block======================
void BlockEnd()
{
  cout << "\t}" << endl;
  out << "\t}" << endl;
}
//================if else======================
void IfStart()
{
  lm.pushNLabel(2);
  out << "\t\tifeq L" << lm.getLabel(0) << endl;
  cout << "\t\tifeq L" << lm.getLabel(0) << endl;
}

void Else()
{
  out << "\t\tgoto L" << lm.getLabel(1) << endl;
  out << "L" << lm.getLabel(0) << ":" << endl;

  cout << "\t\tgoto L" << lm.getLabel(1) << endl;
  cout << "L" << lm.getLabel(0) << ":" << endl;
}

void IfEnd()
{

  out << "L" << lm.getLabel(0) << ":" << endl;
  cout << "L" << lm.getLabel(0) << ":" << endl;
  
  lm.popLabel();
}

void IfElseEnd()
{
  out << "L" << lm.getLabel(1) << ":" << endl;
  cout << "L" << lm.getLabel(1) << ":" << endl;
  lm.popLabel();
}
//================while======================
void WhileStart()
{
  lm.pushNLabel(1);
  out << "L" << lm.getLabel(0) << ":" << endl;
  cout << "L" << lm.getLabel(0) << ":" << endl;
}

void WhileCond()
{
  lm.NLabel(1);
  out << "\t\tifeq L" << lm.getLabel(3 + lm.getFlag()) << endl;
  cout << "\t\tifeq L" << lm.getLabel(3 + lm.getFlag()) << endl;
}

void WhileEnd()
{
  out << "\t\tgoto L" << lm.getLabel(lm.getFlag()) << endl;
  out << "L" << lm.getLabel(3 + lm.getFlag()) << ":" << endl;

  cout << "\t\tgoto L" << lm.getLabel(lm.getFlag()) << endl;
  cout << "L" << lm.getLabel(3 + lm.getFlag()) << ":" << endl;
  lm.popLabel();
}
//================for======================
void ForStart()
{
  lm.pushNLabel(1);
  out << "L" << lm.getLabel(0) << ":" << endl;
  cout << "L" << lm.getLabel(0) << ":" << endl;
}

void ForCond()
{
  lm.NLabel(1);
  out << "\t\tifeq L" << lm.getLabel(3 + lm.getFlag()) << endl;
  cout << "\t\tifeq L" << lm.getLabel(3 + lm.getFlag()) << endl;
}

void ForEnd()
{
  out << "\t\tgoto L" << lm.getLabel(lm.getFlag()) << endl;
  out << "L" << lm.getLabel(3 + lm.getFlag()) << ":" << endl;

  cout << "\t\tgoto L" << lm.getLabel(lm.getFlag()) << endl;
  cout << "L" << lm.getLabel(3 + lm.getFlag()) << ":" << endl;
  lm.popLabel();
}
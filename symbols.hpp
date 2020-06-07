#include <iostream>
#include <map>
#include <vector>

using namespace std;

enum type{
    intType,
    realType,
    boolType,
    strType,
    charType,
    arrayType,
    voidType
};

enum idFlag {
    constValueFlag,
    constVariableFlag,
    variableFlag,
    functionFlag
};

struct idValue;
struct idInfo;

struct idValue {
    int ival = 0;
    double dval = 0;
    bool bval = false;
    string cval = "";
    string sval = "";
    vector<idInfo> aval;
};

struct idInfo {
    int index = 0;
    string id = "";
    int type = intType;
    int flag = variableFlag;
    idValue value;
    bool init = false;
};

class SymbolTable {
private:
    vector<string> symbols;
    map<string, idInfo> table_map;
    int index;
public:
    SymbolTable();
    int insert(string id, int type, int flag, idValue value, bool init);
    idInfo *lookup(string id);
    void dump();
    bool isExist(string id);
    void setFuncType(int type);
    void addFuncArg(string id, idInfo info);
};

class SymbolTableList {
private:
    vector<SymbolTable> list;
    int top;
public:
    SymbolTableList();
    void push();
    bool pop();
    int insert(string id, idInfo info);
    int insert(string id, int type, int size);
    idInfo *lookup(string id);
    void dump();
    void setFuncType(int type);
    void addFuncArg(string id, idInfo info);
};

/* utilities */

bool isConst(idInfo info);
idInfo *intConst(int val);
idInfo *realConst(double val);
idInfo *boolConst(bool val);
idInfo *charConst(char val);
idInfo *strConst(string *val);


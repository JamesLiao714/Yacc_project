#include "symbols.hpp"

SymbolTable::SymbolTable()
{
  index = 0;
}

int SymbolTable::insert(string id, int type, int flag, idValue value, bool init)
{
  if (table_map.find(id) != table_map.end()) {
    return -1;
  }
  else {
    symbols.push_back(id);
    table_map[id].index = index;
    table_map[id].id = id;
    table_map[id].type = type;
    table_map[id].flag = flag;
    table_map[id].value = value;
    table_map[id].init = init;
    return index++;
  }
}

idInfo *SymbolTable::lookup(string id)
{
  if (isExist(id)) return new idInfo(table_map[id]);
  else return NULL;
}

void SymbolTable::dump()
{
  cout << "<id>\t<flag>\t<type>\t<value>" << endl;
  string s;
  for (int i = 0; i < index; ++i)
  {
    idInfo info = table_map[symbols[i]];
    s = info.id + "\t";
    switch (info.flag) {
      case constVariableFlag: s += "const\t"; break;
      case variableFlag: s += "var\t"; break;
      case functionFlag: s += "func\t"; break;
    }
    switch (info.type) {
      case intType: s += "int\t"; break;
      case realType: s += "float\t"; break;
      case boolType: s += "bool\t"; break;
      case strType: s += "str\t"; break;
      case arrayType: s += "array\t"; break;
      case voidType: s += "void\t"; break;
    }
    if (info.init) {
      switch (info.type) {
        case intType: s += to_string(info.value.ival); break;
        case realType: s += to_string(info.value.dval); break;
        case boolType: s += (info.value.bval)? "true" : "false"; break;
        case strType: s += info.value.sval; break;
      }
    }
    if (info.flag == functionFlag) {
      s += "{ ";
      for (int i = 0; i < info.value.aval.size(); ++i) {
        switch (info.value.aval[i].type) {
          case intType: s += "int "; break;
          case realType: s += "float "; break;
          case boolType: s += "bool "; break;
          case strType: s += "str "; break;
        }
      }
      s += "}";
    }
    if (info.type == arrayType) {
      s += "{ ";
      switch (info.value.aval[0].type) {
        case intType: s += "int, "; break;
        case realType: s += "float, "; break;
        case boolType: s += "bool, "; break;
        case strType: s += "str, "; break;
      }
      s += to_string(info.value.aval.size()) + " }";
    }
    cout << s << endl;
  }
  cout << endl;
}

bool SymbolTable::isExist(string id)
{
  return table_map.find(id) != table_map.end();
}

void SymbolTable::setFuncType(int type)
{
  table_map[symbols[symbols.size() - 1]].type = type;
}

void SymbolTable::addFuncArg(string id, idInfo info)
{
  table_map[symbols[symbols.size() - 1]].value.aval.push_back(info);
}


//==============================symbolTableList===================================

SymbolTableList::SymbolTableList()
{
  top = -1;
  push();
}

void SymbolTableList::push()
{
  list.push_back(SymbolTable());
  ++top;
}

bool SymbolTableList::pop()
{
  if (list.size() <= 0) return false;
  list.pop_back();
  --top;
  return true;
}

int SymbolTableList::insert(string id, idInfo info)
{
  return list[top].insert(id, info.type, info.flag, info.value, info.init);
}

int SymbolTableList::insert(string id, int type, int size)
{
  idValue val;
  val.aval = vector<idInfo>(size);
  for(int i = 0; i < size; ++i){
    val.aval[i].index = -1;
    val.aval[i].type = type;
    val.aval[i].flag = variableFlag;
  }
  return list[top].insert(id, arrayType, variableFlag, val, false);
}

idInfo *SymbolTableList::lookup(string id)
{
  for (int i = top; i >= 0; --i) {
    if (list[i].isExist(id)) return list[i].lookup(id);
  }
  return NULL;
}

void SymbolTableList::dump()
{
  cout << " <======= Dump Start =======>" << endl << endl;
  for (int i = top; i >= 0; --i) {
    cout << "Frame index: " << i << endl;
    list[i].dump();
  }
  cout << " <======= Dump End  =======>" << endl;
}
void SymbolTableList::setFuncType(int type)
{
  list[top - 1].setFuncType(type);
}

void SymbolTableList::addFuncArg(string id, idInfo info)
{
  list[top - 1].addFuncArg(id, info);
}

/*value*/

bool isConst(idInfo info)
{
  if (info.flag == constValueFlag || info.flag == constVariableFlag) return true;
  else return false;
}

idInfo *intConst(int val)
{
  idInfo* info = new idInfo();
  info->index = 0;
  info->type = intType;
  info->value.ival = val;
  info->flag = constValueFlag;
  return info;
}

idInfo *realConst(double val)
{
  idInfo* info = new idInfo();
  info->index = 0;
  info->type = realType;
  info->value.dval = val;
  info->flag = constValueFlag;
  return info;
}

idInfo *boolConst(bool val)
{
  idInfo* info = new idInfo();
  info->index = 0;
  info->type = boolType;
  info->value.bval = val;
  info->flag = constValueFlag;
  return info;
}

idInfo *charConst(char val)
{
  idInfo* info = new idInfo();
  info->index = 0;
  info->type = charType;
  info->value.cval = val;
  info->flag = constValueFlag;
  return info;
}

idInfo *strConst(string *val)
{
  idInfo* info = new idInfo();
  info->index = 0;
  info->type = strType;
  info->value.sval = *val;
  info->flag = constValueFlag;
  return info;
}


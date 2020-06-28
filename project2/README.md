# 108-project2-YACC

## BUILD 

Run `Makefile` in terminal

```
make
```

## TEST&RUN
6 test.scala programs are inside the file 

```
./parser < example.scala
```

## Change

### scanner.l

- add `#include "y.tab.hpp"` header file
- add option flags (`Opt_T` `Opt_S`) to determine whether to print token and source code
- add retrun token to yacc
- add READ
- add defintion of data type 'char' 
- remove symbol table from source and separate it into files (`symbols.cpp` `symbols.hpp`)

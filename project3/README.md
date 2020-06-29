# 108-project3-Code Generation

## BUILD 

Run `Makefile` in terminal

```
make
```

## TEST&RUN
test.scala programs are inside the file 

```
make run file=example
```
OR
```
./compiler example.rust
./javaa example.jasm
java example
```

## Change

### new file for code generation
- codeGen.hpp.
- cout to preview the java assembly code.
### parser.l

- add #include "codeGen.hpp" header file
- set `yyin` to input file stream.
- add output file stream.
- add code generation functions to create java assembly code.

### symbols.hpp / symbols.cpp

- add isGlobal to determine the scope of variable.
- add getIndex to get variable index.
- add getValue to get integer and boolean value.

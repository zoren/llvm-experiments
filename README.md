# llvm-experiments
Some experiments with llvm

```
clang -O2 -emit-llvm reverse.c -c -o reverse.o
llvm-dis-6.0 < simple.o > simple.ll
cat lines.txt | lli-6.0 reverse.o > out.txt
```

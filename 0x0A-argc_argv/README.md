# 0x0A - argc, argv
In this project, we explore command line arguments.

## What are Command Line Arguments
Command line arguments are arguments passed into the main function. They are referred to as arguments to main. There are two of them: `argc` which is arguments count and `argv` which is arguments vectors. `argv` is an array of strings that contains the program name and the command line arguments passed.

## How to Make your Compiler Ignore the Unused Function Warning
There are two ways to this
* `(void)`
  ```c
  (void)argc;
  ```
* `__attribute__ ((unused))`
  ```c
  int  __attribute__ ((unused)) myfunction(int parm1, long parm2) { … }
  long __attribute__ ((unused)) myvariable;
  ```

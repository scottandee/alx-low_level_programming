# 0x00 - Hello World
In this project, we explore the basics of C programming and the history bef=hind C programming.

## Some People You Should Know
* **Dennis Ritchie**: The creator of the C programming language at Bell Labs. He and **Ken Thompson** also worked together to create the B programming language and the UNIX OS.
* **Ken Thompson**: Creator of B programming language and the UNIX OS
* **Linux Torvalds**: This is the Inventor of the Linux
* **Brian Kernighan**: Co-author of the "The C programming Language". He and Dennis Ritchie wrote it together

## Stages Involved in C compilation
* Preprocesser - This removes comment, includes header file code in the file itself, replace all macros.
* Compiler - The compiler will take this code and convert it to assembly code.
* Assembler - Converts assembly code into machine language (i.e 0s and 1s). It is also known as Object code.
* Linker - combines these object files along with any necessary libraries to create an executable program.

## About `gcc`
This stands for GNU compiler collection. Some common flags are:
1. `-c`: compiles source code into object files(produces a `.o` file)
2. `-o <output_file>`
3. `-Wall`: enables most warning messages
4. `-Werror`: Treats all warnings as errors
5. `-std=<standard>`: sets the C standard language to be used
6. `-g`: Enable debugging information
7. `-E`: runs only preprocessor stage
8. `-S`: Stops after compilation stage(produces a `.s` file)

## Difference between `puts` and `putchar`
`puts` is used to write strings. `putchar` is used to write characters.

## What is the Return Value in C needed for
The main function's return value is used to indicate the program's exit status, allowing other programs, scripts, or the operating system to determine whether the program completed successfully or encountered an error. Conventionally, a return value of 0 indicates success, while a non-zero return value indicates an error or abnormal termination.

## AUTHOR
* Olayinkascott Andee(andeeolayinkascott@gmail.com)

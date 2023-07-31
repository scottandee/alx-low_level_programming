# 0x0B - Malloc, Free
In this project, we explore the world of dynamic memory allocation.

## What is `malloc`
`malloc` is a function used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

## Automatic Memory Allocation
When you declare variables or use strings with double quotes, the computer is taking care of the memory allocation. This memory can be read and written. There is an exception for string literal(pointer to a char).
```c
char *str;

str = "Scott";
```
The string `"Scott"` that was just declared is stored automatically when
## What is Dynamic Memory Allocation
Dynamic Memory Allocation

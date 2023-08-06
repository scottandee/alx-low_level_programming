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
The string `"Scott"` that was just declared is stored automatically when the program is launched. But, the memory that stores the string is only readable. If you try to change it, you'll have a segfault. `char *str` is only a pointer to the read only memory. If it's declared as an array:
```c
char str[];

str = "Holberton"
```
In this case, the variable `str` stores a copy of the read only memory. This copy has read and write permissions.

## What is Dynamic Memory Allocation
The need for Dynamic Memory Allocation arises when we do not know the exact amount of memory we need at the time we're writing the program and we will know this at execution or runtime.

## `malloc`
This allocates a specific amount if bytes in memory and returns a void pointer(This means that it is a ponter to the type of our choice) to the allocated memory. This memory is unitialized and has read and write permissions. Always use `sizeof` when allocating memory for better portability.

## `free`
The memory we've allocated with malloc is not controlled by the computer. We are tasked with the responsibility of managing this memory. Once we allocate memory with `malloc`, we have to free the memory when we're done with `free`.

## About C Program Layout
[GeeksforGeeks](https://www.geeksforgeeks.org/memory-layout-of-c-program/)

## Note
On error, malloc returns `NULL`. Always check for that malloc is successful.

## `valgrind`
This is a program used to monitor dynamically allocated memory. Here are some useful flags
* `-s`
* `--leak-check=full`
* `--show-leak-kinds=all`
* `--track-origins=yes`

# 0x0C - More Malloc, Free
In this project, we go deeper into dynamic memory allocation.

## `calloc`
This also returns a void pointer. It takes in two arguments ie number of elements of a particular data type and the size of that data type. `calloc` initialises all byte positions with zero.

## `realloc`
If you have a block of memory and you want to change the size of this block, then realloc would help. The first argument is a pointer to the already allocated memory and the second is the size we want it to be

## `exit`
This causes normal process termination and the most significant byte of status ie the parameter of the exit function, is returned to the parent.

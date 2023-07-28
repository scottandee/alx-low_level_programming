# 0x06-pointers_arrays_strings
In this project, we explore pointers to pointers an multi-dimensional arrays

## Pointer to a Pointer
A ponter to a pointer is simply a pointer of (8-bytes) that is used to store the address to another pointer. To access the main variable at the end of a pointer to a pointer, we have to use two asterisks.

```c
int **pp; /* This is a ponter to a ponter */
int *p; /* This is a regular ponter */
int n;

n = 40;
p = &n;
pp = &p;

printf('*p = %d\n', *n) /* n = 40 */
printf('*p = %d\n', *p) /* *p = 40 */
printf('*p = %d\n', **pp) /* **p = 40 */
```

### NOTE
* `n` == `*p` == `**pp`
* `&n` == `p` == `*pp`
* `&p` == `pp`

## Multi-dimensional Arrays
Multidimensional arrays can be declared as:
```c
type name[size1][size2]...[sizeN];
```
To assign values, we do:
```c
int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};
```
**Note**: The curly braces separating each block is optional

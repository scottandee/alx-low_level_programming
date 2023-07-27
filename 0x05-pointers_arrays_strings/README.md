# 0x05 -  Pointers, Arrays and Strings

## What are Pointers?
Pointers are variables which store the address of another variable. The address of a variable can be accessed by doing
```c
int *p
int c;

p = &c;
printf("%p", p);
```

One thing we require the address of variables for is to effect a permanent change to the contents of the variable at the memory address.
This is called **dereferencing** of the pointer.

```c
int *p;
int c = 34;

*p = 56; /* Dereferencing */
```

It should be noted that dereferencing is different from declaration of a pointer

## Call by Value and Call by Reference
When a function is called, it copies the actual value as an argument to the function. Whatever changes that are made here have no effect on the variable passed itself. When it is called by reference, the address of the variable is passed as argument. Whatever changes that are made in the body of the function will have effect on the variable itself

## Arrays
Arrays are contiguous memory areas  that hold a number of values of the same type. There's emphasis on contiguous here. Each block is stored side by side in order. Arrays are immutable in c.

```c
int a[5];
```
**Note**: An array is not a pointer. But you can still use the name of the array in your code and its value will be the address of the first element of the array 

## Pointers Arithmetic
```c
int a[5];

*a = 1;
*(a + 1) = 2;
*(a + 2) = 3;
*(a + 3) = 4;
*(a + 4) = 5;
```

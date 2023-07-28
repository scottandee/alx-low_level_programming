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

## About the `char` C Data Type
The `char` datatype is a an integer type that represents a character using its ASCII code. The ASCII code for the character '0' is 48, and the ASCII codes for the characters '1' to '9' are 49 to 57, respectively. When you subtract the ASCII code for '0' (48) from the ASCII code for any digit character, you get the integer value of that digit. For example, the ASCII code for '5' is 53, so '5' - '0' is 53 - 48, which equals 5. Therefore, when you subtract the ASCII code for '0' from a character that represents a digit, you effectively convert that character to its corresponding integer value.

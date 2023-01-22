#include <stdio.h>
#include "3-calc.h"

/**
* op_add - this adds the two parameters given
* @a: first parameter
* @b: second parameter
* Return: the result of the addition
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - this subtracts the two parameters given
* @a: first parameter
* @b: second parameter
* Return: the rersult of the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - this multiplies the two parameters given
* @a: first parameter
* @b: second parameter
* Return: the result of the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - this divides the first parameter by the second
* @a: first parameter
* @b: second parameter
* Return: the result of the division
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - this finds the modulus of the first parameter from second parameter
* @a: first parameter
* @b: second parameter
* Return: the result of the modulus operration
*/
int op_mod(int a, int b)
{
	return (a % b);
}

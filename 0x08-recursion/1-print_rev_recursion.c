#include "main.h"

/**
* _print_rev_recursion - this prints the content of a string using recursion
* @s: this is the string to be printed
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"

/**
* _print_rev_recursion - this prints the content of a string using recursion
* @s: this is the string to be printed
*/

void _print_rev_recursion(char *s)
{
	int count = 0;
	if (s[count] == '\0')
	{
		return;
	}	
	count++;
	_print_rev_recursion(s + count);
}

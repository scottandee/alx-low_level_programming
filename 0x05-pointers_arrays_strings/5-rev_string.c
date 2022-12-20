#include "main.h"

/**
* rev_string - this reverses whatever variable is given
* @s: this is the string to be reversed
*/

void print_rev(char *s)
{
	int i, length = 0;

	char a[];

	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = length; i >= 0; i--)
	{
		a[length - i] = *(s + i);
	}
	*s = a[];
	
}

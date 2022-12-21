#include "main.h"

/**
* rev_string - this reverses whatever variable is given
* @s: this is the string to be reversed
*/

void rev_string(char *s)
{
	int j, i, length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	j = 0
	for (i = length - 1; s[length] != '\0'; i--)
	{	
		s[j] = s[i];
		j++;
	}
}

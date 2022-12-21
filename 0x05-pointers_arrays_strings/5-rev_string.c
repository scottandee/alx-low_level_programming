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
	for (i = length - 1; s[length] != '\0'; i--)
	{
		j = 0;
		s[j] = s[i];
		j++;
	}
}

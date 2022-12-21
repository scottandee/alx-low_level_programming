#include "main.h"

/**
* rev_string - this reverses whatever variable is given
* @s: this is the string to be reversed
*/

void rev_string(char *s)
{
	int j, temp, i, length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}

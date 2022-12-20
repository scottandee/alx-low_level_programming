#include "main.h"

/**
* rev_string - this reverses whatever variable is given
* @s: this is the string to be reversed
*/

void rev_string(char *s)
{
	int j, k, temp, length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	k = 0;
	j = length - 1;
	
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}

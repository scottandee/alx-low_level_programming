#include "main.h"

/**
* *string_toupper - this converts all the letters of a string to uppercase
*/

char *string_toupper(char *)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (i > 64 && i < 91)
		{
			s[i] = s[i] + 32;
		}
	}
}

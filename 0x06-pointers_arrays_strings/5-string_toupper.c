#include "main.h"

/**
* *string_toupper - this converts all the letters of a string to uppercase
* @str: this is a string
* Return: str
*/

char *string_toupper(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (i >= 65 && i <= 90)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

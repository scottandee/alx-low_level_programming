#include "main.h"

/**
* *_strchr - returns a pointer to the first occurence of c
* @s: this is the string that will be checked through
* @c: this is is the character that will be checed for
* Return: returns pointer if character is found and, null if not found
*/

char *_strchr(char *s, char c)
{
	int i, length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

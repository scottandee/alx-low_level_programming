#include "main.h"

/**
* *cap_string - this capitalizes the first letter of every word
* @s: this is the string to be capitalized
* Return: s
*/

char *cap_string(char *s)
{
	int i, length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
		s[i] == '?' || s[i] == '"' || s[i] == '(' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}

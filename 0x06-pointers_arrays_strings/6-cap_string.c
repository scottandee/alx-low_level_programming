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
		if (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
			s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' ||
			s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' ||
			s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}

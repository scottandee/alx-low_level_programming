#include "main.h"

/**
* _strcmp - this compares the contents of two strings
* @s1: this is one of the strings to be comopared
* @s2: this is the second string that will be compared
* Return: 0 if equal, less than 0,greater than 0
*/

int _strcmp(char *s1, char *s2)
{
	int i, cmp, s1_length = 0, s2_length = 0;

	while (s1[s1_length] != '\0')
	{
		s1_length++;
	}

	while (s2[s2_length] != '\0')
	{
		s2_length++;
	}
	for (i = 0; i < s1_length; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			return (cmp);
		}
	}
	return (0);
}

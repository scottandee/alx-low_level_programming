#include "main.h"

/**
* *_strpbrk - searches a string for sny set of bytes
* @s: string to be searched through
* @accept: bytes that will be searched for
* Return: pointer to s or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j, s_length = 0, a_length = 0;

	while (s[s_length] != '\0')
	{
		s_length++;
	}
	while (accept[a_length] != '\0')
	{
		a_length++;
	}
	for (i = 0; i < s_length; i++)
	{
		for (j = 0; j < a_length; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

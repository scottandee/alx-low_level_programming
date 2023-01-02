#include "main.h"

/**
* _strspn - this gets the length of a prefix substring
* @s: this is the string
* @accept: this is the sting that will be compared
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}

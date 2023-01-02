#include "main.h"

/**
* *_memset - this fills the first n bytes with b
* @s: this is the string that will be edited
* @b: this is the constant that will be filled
* @n: this is the number of bytes that b will fill
* Return: pointer to the memeory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

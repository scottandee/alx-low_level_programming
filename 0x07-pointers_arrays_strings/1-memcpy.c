#include "main.h"

/**
* *_memcpy - this copies memory from source to destination
* @dest: this is the destination string
* @src: this is the source string
* @n: this is the number of bytes that will be copied
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"

/**
* *_strncat - concatenates two strings and uses as most n bytes
* @dest: this is one of the strings to be concatenated
* @src: this the other string that'll be concatenated
* @n: this is the most bytes that'll be used
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, src_length = 0, dest_length = 0;

	while (src[src_length] != '\0')
	{
		src_length++;
	}
	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	for (i = 0; i < src_length; i++)
	{
		if (src_length <= n)
			dest[dest_length + i] = src[i];
	}
	return (dest);

}


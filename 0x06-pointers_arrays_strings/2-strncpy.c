#include "main.h"

/**
* *_strncpy - this copies the contents of src and appends it to dest
* @dest: this is the string src will be appended to
* @src: this the string that'll be copied
* @n: this is the most bytes that'll be used
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, src_length = 0;

	while (src[src_length] != '\0')
	{
		src_length++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < src_length)
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}
	return (dest);

}


#include "main.h"

/**
* *_strcat - this concatenates two strings
* @dest: this is the string that'll increase in size
* @src: this'll be added to dest
* Return: dest
*/

char *_strcat(char *dest, char *src)
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
		dest[dest_length + i] = src[i];
	}
	return (dest);
}

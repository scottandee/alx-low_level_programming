#include "main.h"

/**
* *_strcpy - this reverses whatever variable is given
* @src: this is the string to be copied
* @dest: this is where it'll be pasted to
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (*dest);
}

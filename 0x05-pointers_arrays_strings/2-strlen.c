#include "main.h"

/**
* _strlen - this prints the length of a string
* @s: this is the string
* Return: the length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (string[length] != '\0')
	{
		length++;
	}
	return (length);
}

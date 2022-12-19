#include "main.h"

/**
* _strlen - this prints the length of a string
* @s: this is the string
*/

int _strlen(char *s)
{
	int arr_length;

	arr_length = sizeof(*s) / sizeof(s[0]);
	_putchar(arr_length + '0');
	return (0);
}

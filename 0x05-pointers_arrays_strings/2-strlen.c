#include "main.h"

/**
* _strlen - this prints the length of a string
* @s: this is the string
* Return: the length of the string
*/

int _strlen(char *s)
{
	/**
	* int length = 0;

	* while (s[length] != '\0')
	* {
	*	length++;
	* }
	* return (length);
	*/
	int length;

	length = sizeof(s) / sizeof(int);
	return (length - 1);
}

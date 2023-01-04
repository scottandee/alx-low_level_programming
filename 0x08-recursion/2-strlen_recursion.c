#include "main.h"

/**
* _strlen_recursion - this counts the number of characters in a string
* @s: this is the string that'll be counted
* Return: this return the length of the string
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*(s + count) == '\0')
	{
		return (0);
	}
	count++;
	return (1 + _strlen_recursion(s + count));
}

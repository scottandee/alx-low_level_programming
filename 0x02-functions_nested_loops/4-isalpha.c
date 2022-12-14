#include <stdio.h>
/**
 * _isalpha - checks if alphabet
 * Description: checks if the argument is an alphabet
 * @c: this is the character that is checked
 * Return: 1 if c is a letter and 0 if not
 **/
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A')
	{
		if (c <= 'z' || c <= 'Z')
		{
			return (1);
		}
	}
	return (0);
}

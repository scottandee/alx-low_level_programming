#include "main.h"
/**
 * _islower - lowercase check
 * Description: checks letter if its lower case and returns a value
 * @c: this is the alphabet that'll be checked
 * Return: 1 if lowercase and 0 if not
 **/
int _islower(int c)
{
	if (c <= 'z')
	{
		return (1);
	}
		return (0);
}

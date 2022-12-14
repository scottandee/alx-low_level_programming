#include "main.h"
/**
 * print_alphabet-x10 - print alphabets 10 times
 * Description: Print all 26 letters of the alphabet 10 times
 * Return: Return value is void
 **/
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j)
		}
		_putchar('\n')
	}
	_putchar('\n')
}

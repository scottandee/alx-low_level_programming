#include "main.h"
/**
 * print_last_digit - prints last digit
 * Description: this function prints the last digit of the argument
 * @d: this is the value that we are going to print the last digit of
 * Return: this will return the value of the last digit
 **/
int print_last_digit(int d)
{
	int ld = d % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (0);
}

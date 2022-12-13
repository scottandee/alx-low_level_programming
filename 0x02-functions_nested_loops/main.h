#include <stdio.h>

/**
 * print_alphabet - prints alphabets
 * Description: this function prints out all 26 letters of the alphabets
 * Return: Always 0
 **/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i > 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}

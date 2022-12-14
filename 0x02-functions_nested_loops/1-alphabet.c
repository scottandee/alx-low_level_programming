#include "main.h"
/**
 * print_alphabet - prints alphaabets
 * Description: prints all 26 alphabets and a new line
 * Return: Always 0
 **/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i >= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

#include <stdio.h>
/**
 * main - this is the entry point function
 * Description : this is the entry point function
 * Return: the return value is zero
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}

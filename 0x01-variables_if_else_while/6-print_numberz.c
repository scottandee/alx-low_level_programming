#include <stdio.h>
/**
 * main - entry point function
 * Description: it is the entry point function
 * Return: it returns the value of zero to the console
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}


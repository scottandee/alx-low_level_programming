#include <stdio.h>
/**
 * main - entry point function
 * Description: this is the entry point function
 * Return: the return value is zero
 */
int main(void)
{
	char i, c;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

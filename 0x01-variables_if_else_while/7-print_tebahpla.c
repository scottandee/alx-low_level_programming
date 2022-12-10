#include <stdio.h>
/**
 * main - entry point function
 * Description: this is the entry point function
 * Return: this function returns a value of zero
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

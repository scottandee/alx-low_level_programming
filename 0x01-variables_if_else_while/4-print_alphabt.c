#include <stdio.h>
/**
 * main - entry point function
 * Description: this is the entry point function
 * Return: the return value is zero
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

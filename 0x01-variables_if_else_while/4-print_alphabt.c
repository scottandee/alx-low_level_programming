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
		if (c == 'q')
		{
			return (0);
		}
		else if (c == 'e')
		{
			return (0);
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}

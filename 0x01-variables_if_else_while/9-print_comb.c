#include <stdio.h>
/**
 * main - entry point function
 * Description: this is the entry point function
 * Return: the return value for this function is zero
 */
int main(void)
{
	int i;

	for (i = 0; i <= 0; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

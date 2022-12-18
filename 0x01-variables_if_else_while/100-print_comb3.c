#include <stdio.h>

/**
* main - entry point function
* Return: 0
*/
int main(void)
{
	int i, j; /* i is first digit, j is 2nd digit */

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}

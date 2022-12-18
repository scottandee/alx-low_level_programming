#include <stdio.h>

/**
* main - entry point function
* Return: 0
*/
int main(void)
{
	int i, j, k;/* i is first digit, j is 2nd digit, k is 3rd digit */

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
* times_table - this prints out the nine times table
*/

void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;
			if (times > 9)
			{
				if (j == 9)
				{
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
					_putchar(',');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
			}
			else
			{
				if (j == 9)
					_putchar(times + '0');
					_putchar('\n');
				else if (j != 0)
					_putchar(' ');
					_putchar(' ');
					_putchar(',');
					_putchar(times + '0');
				else
					_putchar(times + '0');
					_putchar(',');
			}
		}
	}
}

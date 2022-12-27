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
			_putchar(times + '0');
			if (j == 9)
			{
				_putchar('\n');
			}
			else if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
			}
		}
	}
}

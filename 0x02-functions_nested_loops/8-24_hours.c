#include "main.h"
/**
 * jack_bauer - prints all minutes
 * Description: prints all the minutes of the day
 * Return: void
 **/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
				_putchar(':');
			}
			else
			{
				_putchar(h + '0');
				_putchar(':');
			}
			if (m < 10)
			{
				_putchar('0');
				_putchar(m + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(m + '0');
				_putchar('\n');
			}
		}
	}
}

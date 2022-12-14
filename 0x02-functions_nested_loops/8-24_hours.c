#include "main.h"
/**
 * jack_bauer - prints all minutes
 * Description: prints all the minutes of the day
 * Return: void
 **/
 int jack_bauer(void)
 {
 	for (i = 0; i <= 23; i++)
	{
		if (i > 10)
		{
			_putchar('0');
			_putchar(i + '0');
			_putchar(':');
		} else
		{
			_putchar(i + '0');
			_putchar(':');
		}
		for (j = 0; j <= 59; j++)
		{
			if (j > 10)
			{
				_putchar('0');
				_putchar(j + '0');
			} else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}

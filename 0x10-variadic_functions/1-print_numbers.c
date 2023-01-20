#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - prints all numbers
* @separator: this is the separator between numbers
* @n: this is the count of numbers to be printed
* @...: these are the numbers to be printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list param;

	va_start(param, n);
	if (n == 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%i", va_arg(param, int));
		}
		else if (i == n - 1)
		{
			printf("%i\n", va_arg(param, int));
		}
		else
		{
			printf("%i%s", va_arg(param, int), separator);
		}
	}
	va_end(param);
}

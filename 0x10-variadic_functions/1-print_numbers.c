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
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(param, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(param);
}

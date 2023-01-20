#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - this sums all of its parameters
* @n: the count of integers
* @...: these are the rest of the parameters to be added
* Return: 0 if n = 0, and the sum value if success
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list param;

	va_start(param, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(param, int);
	}

	va_end(param);
	return (sum);
}

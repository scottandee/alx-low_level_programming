#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - prints all characters passed as arguments
* @format: this is the format of the variables to be printed
* @...: these are the variables passed
*/

void print_all(const char * const format, ...)
{
	printf("%s", format);
}

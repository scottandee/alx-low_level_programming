#include "main.h"

/**
* reset_to_98 - dereferencing with a pointer
* @*n: pointer to the variable  thats too be dereferenced
*/

void reset_to_98(int *n)
{
	*n = 98;
	_putchar('\n');
}

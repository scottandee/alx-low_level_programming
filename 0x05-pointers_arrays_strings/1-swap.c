#include "main.h"

/**
* swap_int - this swaps the value of two variables with one another
* @a: this is one of the variables to be swapped
* @b: this is the secont variable
*/

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - this allocates memory using malloc
* @b: this is the size of memory that will be allocated
* Return: 98 if failure and pointer to memory if success
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

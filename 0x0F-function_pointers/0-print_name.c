#include "function_pointers.h"

/**
* print_name - this prints the name argument in two different forms
* @name: this is the name to be printed
* @f: this is the funtion that will be called
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}

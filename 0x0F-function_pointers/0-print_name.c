#include "function_pointers.h"

/**
* print_name - this prints the name argument in two different forms
* @name: this is the name to be printed
* @f: this is the funtion that will be called
*/

void print_name(char *name, void (*f)(char *))
{
	void (*ptname)(char *) = &print_name_as_is;
	void (*ptuppercase)(char *) = &print_name_uppercase;

	if (f == ptname)
	{
		(*ptname)(name);
	}
	if (f == ptuppercase)
	{
		(*ptuppercase)(name);
	}
	return;
}

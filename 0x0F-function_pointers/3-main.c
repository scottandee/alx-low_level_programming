#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
* main - this is the entry point function
* @argc: this counts the number of arguments
* @argv: this contains a string of the arguments passed
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int c, d;

	c = atoi(argv[1]);
	d = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3] == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", (*get_op_func(argv[2]))(c, d));
	return (0);
}

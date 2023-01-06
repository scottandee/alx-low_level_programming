#include <stdio.h>

/**
* main - this is the main function
* @argc: this counts the arguments
* @argv: this is a string containing the arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}



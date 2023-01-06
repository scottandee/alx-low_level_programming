#include <stdio.h>

/**
* main - this is the main function
* @argc: this counts the arguments
* @argv: this is a string containing the arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


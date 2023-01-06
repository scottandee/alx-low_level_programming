#include <stdio.h>
#include <stdlib.h>
/**
* main - this is the main function
* @argc: this counts the arguments
* @argv: this is a string containing the arguments
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int i, result = 1;
	if (argc == 3)
	{
		for (i = 1; i < 3; i++)
		{
			int temp = atoi(argv[i]);
			result = result * temp;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}


#include <stdio.h>
/**
  * main - entry point function
  * Description: This is the entry point function
  * Return: the returned value is zero
  */
int main(void)
{
	int c, i, li, lli, f;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	printf("Size of long long int: %d byte(s)\n", lli);
	printf("Size of a float: %d byte(s)\n", f);

	return (0);
}

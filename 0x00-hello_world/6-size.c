#include <stdio.h>
/**
  * main - entry point function
  * Description: This is the entry point function
  * Return: the returned value is zero
  */
int main(void)
{
	int c i li lli f;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a int: %c\n", c)
	printf("Size of an int: %d\n", i)
	printf("Size of a long int: %li\n", li)
	printf("Size of long long int: %lli\n", lli)
	printf("Size of a float: %f\n", f)

	return (0)
}

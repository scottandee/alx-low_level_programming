#include <stdio.h>

/**
  * _atoi - This function converts an integer into a string
  *
  * @s: This is the sring that is to be converted into an integer
  * Return: Retunrns the equivalent integer value of the string
  * or zero if no integers exist in the string
  */

int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (result != 0 && !(s[i] >= 48 && s[i] <= 57))
		{
			break;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			result = (result * 10) + s[i] - '0';
		}
		if (s[i] == 45)
		{
			sign = sign * -1;
		}
		i++;
	}
	result = result * sign;

	return (result);
}

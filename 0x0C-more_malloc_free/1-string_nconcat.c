#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - this concatenates two strings
* @s1: this is the first string
* @s2: this is the string that n bytes will be chosen from
* @n: this is the size of bytes of n that will be concatenated with s1
* Return: NULL if failure and a pointed to allocated memory if successful
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int i, j, s1_len = 0, s2_len = 0, num;

	num = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	if (s2_len >= num)
	{
		num = s2_len;
	}
	array = malloc(sizeof(*array) * (s1_len + num + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > s1_len; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j > num; j++)
	{
		array[i + j] = s2[j];
	}
	array[i + j] = '\0';
	return (array);
}

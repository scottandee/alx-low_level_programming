#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - points to a newly allocated space of a to strings concatenated
* @s1: this is the first string
* @s2: this is the second string
* Return: pointer to concatenated string if successful, NULL if failure
*/

char *str_concat(char *s1, char *s2)

{
	char *array;
	int i, s1_len = 0, s2_len = 0;

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

	array = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i < s2_len; i++)
	{
		array[i + s1_len] = s2[i];
	}
	array[s1_len + s2_len] = '\0';
	return (array);

}

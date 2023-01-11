#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - returns a pointer to the copy of the string given as parameter
* @str: this is the string that will be copied
* Return: pointer to duplicated string OR NULL if str = NULL
*/

char *_strdup(char *str)
{
	char *array;
	int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	array = malloc(sizeof(char) * (length + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		array[i] = str[i];
	}
	array[length] = '\0';
	return (array);
}

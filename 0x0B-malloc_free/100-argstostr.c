#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * argstostr - this concatenates all arguments to main
  * and also separates each argument with a newline character
  *
  * @ac: This is the argument count
  * @av: This is the array of strings that contains arguments
  * to main
  * Return: A pointer to new string if it's successful and
  * NULL if not.
  */

char *argstostr(int ac, char **av)
{
	int i;
	char *str = NULL, *buffer = NULL;

	for (i = 0; i < ac; i++)
	{
		buffer = str_concat_plus(str, av[i]);
		if (buffer != NULL)
		{
			free(str);
		}
		str = buffer;
	}
	return (str);
}

/**
  * _strlen - This finds the length of a string
  *
  * @str: This is the string to be counted
  * Return: This returns the length of the string
  */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
  * str_concat_plus - this concatenates two strings and adds
  * a new line character in between the two strings
  *
  * @s1: this is the first of the strings to be concatenated
  * @s2: This is the second of the strings to be concatenated
  * Return: This function returns a pointer to the concatenated
  * string or NULL if failure
  */
char *str_concat_plus(char *s1, char *s2)
{
	int i = 0, j = 0, len_s1 = 0, len_s2 = 0;
	char *str;

	if (s1 == NULL)
	{
		len_s1 = 0;
	}
	else
	{
		len_s1 = _strlen(s1);
	}
	len_s2 = _strlen(s2);

	str = malloc(sizeof(char) * (len_s1 + len_s2 + 2));
	if (str == NULL)
		return (NULL);

	if (len_s1 != 0)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\n';
	j++;
	str[i + j] = '\0';
	return (str);
}

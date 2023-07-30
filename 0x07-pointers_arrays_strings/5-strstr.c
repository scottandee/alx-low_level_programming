#include "main.h"
#include <stddef.h>

/**
  * _strstr - finds the first occurrence of the substring
  * needle in the string haystack
  *
  * @haystack: This is the string to be serched through
  * @needle: This is the pattern that is to be matched
  * Return: A pointer to the start of the match or NULL
  * if there's no match
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, match_len = 0, matches = 0;

	while (needle[match_len] != '\0')
	{
		match_len++;
	}
	if (match_len == 0)
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			matches++;
			j++;
		}
		else
		{
			j = 0;
			matches = 0;
		}
		if (matches == match_len)
		{
			return (haystack + (i - match_len + 1));
		}
		i++;
	}
	return (NULL);
}

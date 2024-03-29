#include "lists.h"

/**
* list_len - prints all the elements of list
* @h: start of list
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

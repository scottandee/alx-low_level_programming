#include "lists.h"

/**
  * listint_len - this counts the nnumber of elements in a singly linked list
  * @h: this is the head of the list
  * Return: the nuumber of elements in singly linked list
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

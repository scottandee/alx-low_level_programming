#include "lists.h"

/**
  * print_dlistint - this prints all elements in a doubly linked list
  * @h: this is the head of the doubly linked list
  * Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

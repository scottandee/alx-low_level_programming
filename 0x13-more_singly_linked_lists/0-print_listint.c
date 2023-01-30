#include "lists.h"

/**
  * print_listint - this prints the elements of a singly linked list
  * @h: this is the head of the list
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	if (h == NULL)
	{
		return(0);
	}
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);

}

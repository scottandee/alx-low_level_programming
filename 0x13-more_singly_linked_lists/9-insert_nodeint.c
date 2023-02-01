#include "lists.h"

/**
  * insert_nodeint_at_index - inserts new node at given position
  * @head: this is the first member of the list
  * @idx: this is the index of the list that it will be added to
  * @n: this is the value of the node to be added
  * Return: address of new node or NUL if failure
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));

	ptr2->n = n;
	ptr2->next = NULL;

	idx--;
	while (idx != 1)
	{
		ptr = ptr->next;
		ptr->next = ptr2;
	}
	return (ptr2);
}

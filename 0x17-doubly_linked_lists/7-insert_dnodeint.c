#include "lists.h"

/**
  * insert_dnodeint_at_index - this inserts a node at given index
  * @h: this is the first element in the doubly linked list
  * @idx: this is the index at which the node should be inserted
  * @n: this is the data that will be inserted
  * Return: pointer to new node or NULL if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	idx--;
	while (idx != 0)
	{
		temp = temp->next;
		idx--;
	}
	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp = temp->next;
	temp->prev = new_node;

	return (new_node);
}

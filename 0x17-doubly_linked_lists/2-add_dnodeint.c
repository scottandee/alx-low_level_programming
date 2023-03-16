#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a list
  * @head: this is the first element of the list
  * @n: this is the number to be added to the list
  * Return: the address of the new element or NULL if failure
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	if (head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}

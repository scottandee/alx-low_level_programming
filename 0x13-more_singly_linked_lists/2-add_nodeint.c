#include "lists.h"

/**
  * add_nodeint - function that adds a new node to the beginnning of the list
  * @head: this is the head of the list
  * @n: this is the data value that will be added to the list
  * Return: address of new element or null if it fails
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (malloc(sizeof(listint_t)));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

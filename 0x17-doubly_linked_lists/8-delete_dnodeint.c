#include "lists.h"

/**
  * delete_dnodeint_at_index - this deletes the node at specified index
  * @head: this is the first element in the singly linked list
  * @index: this is the index at which the element will be deleted from
  * Return: 1 if successful, -1 if failure
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *new_node;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));

	index--;
	while (index != 0)
	{
		temp = temp->next;
		index--;
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	temp = temp->next;
	temp->prev = new_node;

	return (index);
}

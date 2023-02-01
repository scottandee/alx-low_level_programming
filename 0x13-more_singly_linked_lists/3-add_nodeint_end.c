#include "lists.h"

/**
* add_nodeint_end - adds node at the end of a list
* @head: this is the head of the list
* @n: this is the data to be added
* Return: address of new element or null if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	new_node->n = n;
	return (*head);
}

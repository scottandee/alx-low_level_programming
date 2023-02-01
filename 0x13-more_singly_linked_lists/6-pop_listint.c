#include "lists.h"

/**
  * pop_listint - it deletes the head of the node and returns its data
  * @head: this is the first member of the list
  * Return: head of node data or zero if null
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}

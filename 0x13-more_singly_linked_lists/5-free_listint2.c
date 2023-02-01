#include "lists.h"

/**
  * free_listint2 - this frees a linked list and sets head to null
  * @head: this is the first member in the list
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}

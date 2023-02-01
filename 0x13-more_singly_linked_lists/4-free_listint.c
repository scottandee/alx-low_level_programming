#include "lists.h"

/**
  * free_listint - this frees an already created linked list
  * @head: this is the first member in the list
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

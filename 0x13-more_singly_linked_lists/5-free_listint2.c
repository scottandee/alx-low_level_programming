#include "lists.h"

/**
  * free_listint2 - this frees an already created linked list and sets head to null
  * @head: this is the first member in the list
  */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}

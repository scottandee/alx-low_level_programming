#include "lists.h"

/**
  * free_listint2 - this frees a linked list and sets head to null
  * @head: this is the first member in the list
  */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	ptr = *head;
	if (head == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	head = NULL;
}

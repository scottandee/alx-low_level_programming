#include "lists.h"

/**
  * free_dlistint - this function frees a doubly linked list
  * @head - this is the first element in the doub;y linked list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/*Assigning the head pointer to a temorary container*/
	temp = head;
	/*Looping through the entire linked list*/
	while (temp != NULL)
	{
		/*Assigning the temporary pointer to the next node so as not to loose access to the linked list*/
		temp = temp->next;
		/*Freeing the head*/
		free(head);
		/*Assigning the value of head to a the next*/
		head = temp;
	}
}

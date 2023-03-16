#include "lists.h"

/**
  * sum_dlistint - sums up all the members in a doubly linked list
  * @head: this is the first element in the doubly linked list
  * Return: the sum of the data in the nodes or 0 if empty list
  */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int data, sum = 0;

	temp = head;

	/*loop through the entire doubly linked list*/
	while (temp != NULL)
	{
		data = temp->n;
		sum = sum + data;
		temp = temp->next;
	}
	return (sum);
}

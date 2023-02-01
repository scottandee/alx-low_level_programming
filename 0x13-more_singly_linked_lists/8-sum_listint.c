#include "lists.h"

/**
  * sum_listint - this sums all of the data in an entire linked list
  * @head: this is the first member of the list
  * Return: sum of all data or zero if list is empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0, val;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		val = head->n;
		sum = sum + val;
		head = head->next;
	}
	return (sum);
}

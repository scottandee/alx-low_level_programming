#include "lists.h"

/**
  * get_dnodeint_at_index - this gets the node at specified index
  * @head: this is the first element in the singly linked list
  * @index: this is the index's element we want to get
  * Return: this returns the value at index or null if it does not  exist
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp->next != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}

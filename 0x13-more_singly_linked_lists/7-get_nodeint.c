#include "lists.h"

/**
  * get_nodeint_at_index - this gets the node at the stated index
  * @head: this is the first member of the list
  * @index: this is the index of the list to be returned
  * Return: the nth node of the list or NULL if it doesn't exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		count++;
	}
	return (head);
}

#include "lists.h"

/**
* print_list - prints all the elements of list
* @h: start of list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *temp;
	int i = 0;

	temp = h;
	while (temp->next != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		i++;
	}

	printf("[%u] %s\n", temp->len, temp->str);
	return (i + 1);
}

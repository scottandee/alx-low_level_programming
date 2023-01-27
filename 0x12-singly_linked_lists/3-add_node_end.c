#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list
* @head: this is the first element in the list
* @str: this is the string to be duplicated
* Return: address of new element or null if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
	{
		new->len = nchar;
		new->next = NULL;
		temp = *head;
	}
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
			temp->next = new;
	}
	return (*head);
}

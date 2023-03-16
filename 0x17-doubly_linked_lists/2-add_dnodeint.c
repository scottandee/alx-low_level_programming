#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a list
  * @head: this is the first element of the list
  * @n: this is the number to be added to the list
  * Return: the address of the new element or NULL if failure
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	/*Condition for an empty doubly linked list*/
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		/*update next for new_node*/
		new_node->next = *head;
		/*update prev for existing node*/
		temp->prev = new_node;
		/*Assign the new node to be the head*/
		*head = new_node;
	}
	return (new_node);
}

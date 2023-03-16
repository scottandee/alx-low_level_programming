#include "lists.h"

/**
  * add_dnodeint_end - this adds a new node at the end of the list
  * @head: this is the first element in the doubly linked list
  * @n: this is the element to be inserted
  * Return: the address of the new element or Null if failure
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;
	/* Assigning a temporary container for the head file*/
	temp = *head;

	/* Allocating memory for a new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign the value of next and data to new node*/
	new_node->n = n;
	new_node->next = NULL;

	/* Condition for if there's no list yet and head is equal to NULL*/
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
	/* Traverse through the entire linked list till you reach the end*/
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new_node->prev = temp;
		temp->next = new_node;
	}

	return (new_node);
}

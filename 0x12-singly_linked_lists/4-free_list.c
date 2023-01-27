#include "lists.h"

/**
* free_list - this frees a list_t list
* @head: this iis the first element of the node
*/

void free_list(list_t *head)
{
	free(head);
}

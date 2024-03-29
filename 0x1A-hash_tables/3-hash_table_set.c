#include "hash_tables.h"

/**
  * hash_table_set - this adds an element to the hash table
  * @ht: the hash table you want to add/update key/value
  * @key: this is the key that will be used to search for a value
  * @value: this is the value that is to be added at the index
  * Return: 1 if sucess, 0 if failure
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *new_node;

	if (!ht || !key || !*key || !value) /*check if key is empty*/
	{
		return (0);
	}
	index = hash_djb2((unsigned char *)key);
	index = index % ht->size;
	temp = ht->array[index];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)/*If the index spot is empty*/
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

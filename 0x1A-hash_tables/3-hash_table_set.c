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
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	hash_node_t *current;

	if (strcmp(key, "") == 0)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = hash_djb2((unsigned char *)key);
	index = index % ht->size;
	current = ht->array[index];


	if (current == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		if (strcmp(new_node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			new_node->next = current;
			ht->array[index] = new_node;
		}
	}
	return (1);
}

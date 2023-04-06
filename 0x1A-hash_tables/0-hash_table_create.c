#include "hash_tables.h"

/**
  * hash_table_create - this creates and allocates memory for a hash table
  * @size: this is the size of the table to be created
  * Return: It returns the table if successful and NULL if not
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));
	if (table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

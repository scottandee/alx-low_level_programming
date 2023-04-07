#include "hash_tables.h"

/**
  * hash_table_delete - this deletes a hash table
  * @ht: this is the hash table to be deleted
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *buffer;

	for (i = 0; i <= 1024; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			buffer = temp;
			temp = temp->next;
			free(buffer);
		}
		free(temp);
	}
	free(ht->array);
	free(ht);
}

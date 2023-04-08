#include "hash_tables.h"

/**
  * hash_table_print - this function prints the hash table
  * @ht: this is the hash table that is to be printed
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, buffer = 0;
	hash_node_t *temp;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			continue;
		}
		else
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				buffer++;
				if (buffer == 1)
				{
					printf("'%s': '%s'", temp->key, temp->value);
				}
				else
				{
					printf(", '%s': '%s'", temp->key, temp->value);
				}
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}

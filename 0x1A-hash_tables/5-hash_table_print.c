#include "hash_tables.h"

/**
  * hash_table_print - this function prints the hash table
  * @ht: this is the hash table that is to be printed
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	printf("{");
	for (i = 0; i <= ht->size; i++)
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
				printf("'%s': '%s'", temp->key, temp->value);
				if (i < ht->size)
				{
					printf(", ");
				}
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}

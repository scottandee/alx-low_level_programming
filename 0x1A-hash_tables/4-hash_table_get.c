#include "hash_tables.h"

/**
  * hash_table_get - this function gets the value of the key given
  * @ht: this is the hash table
  * @key: this is the key that we're to retrieve it's value
  * Return: Value if found, NULL if NOT
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || !key)
	{
		return (NULL);
	}
	index = hash_djb2((unsigned char *) key);
	index = index % ht->size;
	temp = ht->array[index];

	if (temp == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

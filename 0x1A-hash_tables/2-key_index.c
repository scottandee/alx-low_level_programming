#include "hash_tables.h"

/**
  * key_index - this returns the index of a key
  * @key: this is the key that will be searched for
  * size: this is the size of the table that is to be created
  * Return: returns the index at which a key/value pair should be stored
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);

}

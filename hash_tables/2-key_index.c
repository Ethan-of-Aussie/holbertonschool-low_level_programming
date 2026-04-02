#include "hash_tables.h"
/**
 *key_index - Provides index of a key
 *
 *@key: Holds the element
 *@size: The size of the index
 *Return: Area to be sotred in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}

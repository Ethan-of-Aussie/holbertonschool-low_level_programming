#include "hash_tables.h"
/**
 *hash_table_create - Creating the hash table
 *
 *@size: The size of the array
 *Return: The created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(*ht));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(*ht->array));
	if (!ht->array)
		{
		free(ht);
		return (NULL);
		}

return (ht);
}

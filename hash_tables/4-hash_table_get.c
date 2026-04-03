#include "hash_tables.h"
/**
 *hash_table_get
 *
 *@ht: The pointer to hash_table_s
 *@key: Key holds the string
 *Return: The found key or null if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
	if (strcmp(node->key, key) == 0)
		return (node->value);
	node = node->next;
	}
return (NULL);
}

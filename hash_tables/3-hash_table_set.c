#include "hash_tables.h"
/**
 *hash_table_set - Inserts or updates a key/value pair in a hash table
 *@ht: Pointer to the hash table
 *@key: The key, holds the string
 *@value: The value associated with the key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *node;
	hash_node_t *newnode;

	if (!ht || !key || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
	if (strcmp(node->key, key) == 0)
		{
		free(node->value);
		node->value = strdup(value);
		return (1);
		}
		node = node->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
	return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
return (1);
}

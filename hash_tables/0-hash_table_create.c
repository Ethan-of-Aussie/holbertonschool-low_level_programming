#include "hash_tables.h"
/**
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *newnode = malloc(sizeof(*newnode));
	hash_table_t *ht;

	if (!newnode)
	  return (NULL);

	newnode->next =
}

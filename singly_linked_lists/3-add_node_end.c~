#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: pointer to the pointer to the head of the list
 *@str: string to be duped into new node
 *
 *Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	while (str[len])
		len++;

	new_node->len = len;
	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

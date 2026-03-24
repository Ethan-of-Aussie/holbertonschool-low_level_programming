#include "lists.h"
/**
 *add_node_end - adds a new node at the end of a list_t
 *@head: pointer to the pointer to the head of the list
 *@str: string to be duped into new node
 *
 *Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

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
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;

	new_node->next = NULL;
	current->next = new_node;
	return (new_node);
}

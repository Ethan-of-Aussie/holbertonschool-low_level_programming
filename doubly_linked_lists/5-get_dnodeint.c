#include "lists.h"
/**
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!(*head))
	{
		(*head) = malloc(sizeof(dlistint_t));
		(*head)->n = index;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return;
	}

	dlistint_t *newmode = malloc(sizeof(*newnode));
	if (!newnode)
		return (NULL);
	newnode->n = index;
	newnode->prev = (*head)->prev;
	(*head)->prev = newnode;
	newnode->prev->next = newnode;
	newnode->next = (*head);
}

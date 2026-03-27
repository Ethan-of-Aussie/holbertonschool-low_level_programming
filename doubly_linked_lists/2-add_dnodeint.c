#include "lists.h"
/**
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(*newnode));
	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	(*head)->prev = newnode;
	*head = newnode;
return (newnode);
}

#include "lists.h"
/**
 *insert_dnodeint_at_index - Insert newnode at given postion
 *
 *@h: The pointer to the list
 *@idx: Theindex of list where new node will be added
 *@n: The value
 *
 *Return: The inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur;
	unsigned int i;

	dlistint_t *newnode = malloc(sizeof(*newnode));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
	newnode->prev = NULL;
	newnode->next = *h;
	if (*h != NULL)
		(*h)->prev = newnode;
	*h = newnode;
	return (newnode);
	}

	cur = *h;

	for (i = 0; i < idx - 1 && cur != NULL; i++)
	cur = cur->next;

	if (!cur)
	{
		free(newnode);
		return (NULL);
	}
	newnode->prev = cur;
	newnode->next = cur->next;
	cur->next = newnode;

	if (newnode->next != NULL)
		newnode->next->prev = newnode;

	return (newnode);
}

#include "lists.h"
/**
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = *head;

	if (!*head)
		return (NULL);

	tmp = *head;

	for (i = 0; tmp != NULL && i < index; ++i)
	{
		tmp = tmp->next;
	}

	if (!tmp)
		return (-1);
	else
		return (1);

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	if (!tmp->next)
		tmp->next->prev = tmp->prev;


	if (*head == tmp)
		*head = tmp->next;
	if (!tmp->next)
		return (NULL);

	if (!tmp)
		return (-1);
	free(tmp);
	return (1);
}

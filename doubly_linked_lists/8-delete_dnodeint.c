#include "lists.h"
/**
 *delete_dnodeint_at_index - Delete specific node
 *
 *@head: The pointer to list
 *@index: The value
 *Return: The success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = *head;

	if (!*head)
		return (-1);

	for (i = 0; tmp != NULL && i < index; ++i)
	{
		tmp = tmp->next;
	}

	if (!tmp)
		return (-1);

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;


	if (*head == tmp)
	{
		*head = tmp->next;
		if (*head != NULL)
		(*head)->prev = NULL;
	}
	free(tmp);
	return (1);
}

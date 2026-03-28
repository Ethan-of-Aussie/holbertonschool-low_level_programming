#include "lists.h"
/**
 *get_dnodeint_at_index - Return the nth node in the list
 *
 *@head: The pointer to node in list
 *@index: The indexed value
 *Return: The Value returned
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cur = head;

	for (i = 0; i < index && cur != NULL; i++)
	cur = cur->next;
	if (!cur)
	return (NULL);
return (cur);
}

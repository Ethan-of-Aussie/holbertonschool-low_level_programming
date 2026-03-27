#include "lists.h"
/**
 *free_dlistint_t - time to go free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
	temp = head->next;
	free (head);
	head = temp;
	}
}

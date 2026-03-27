#include "lists.h"
/**
 *dlistint_len - Return length of linked list
 *
 *@h: The pointer to struct head
 *Return: The length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

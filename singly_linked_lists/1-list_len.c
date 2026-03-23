#include "lists.h"
/**
 *list_len - return number of elements from list_t
 *@h: pointer of nodes in linked list
 *
 *Return: The counted elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

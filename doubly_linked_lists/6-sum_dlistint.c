#include "lists.h"
/**
 *sum_dlistint - Added sum of the value in 'n'
 *
 *@head: The pointer to the list
 *Return: The full sum of the list value
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
return (sum);
}

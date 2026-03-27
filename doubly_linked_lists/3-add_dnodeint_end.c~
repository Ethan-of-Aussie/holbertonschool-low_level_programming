#include "lists.h"
/**
 *add_dnodeint - Apply newnode to the beginning of list
 *
 *@head: The head, to apply newnode at beginning of list
 *@n: The value to send into newnode
 *Return: The value in newnode at beginning of list
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

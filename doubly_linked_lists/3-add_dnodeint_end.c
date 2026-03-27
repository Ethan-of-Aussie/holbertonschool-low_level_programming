#include "lists.h"
/**
 *add_dnodeint - Apply newnode to the end of list
 *
 *@head: The head, to apply newnode at end of list
 *@n: The value to send into newnode
 *Return: The value in newnode at end of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(*newnode));
	dlistint_t *temp;

	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = *head;
	if (!*head)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	else
	{
	while (temp->next != NULL)
		{
		temp = temp->next;
		}
	}
	temp->next = newnode;
	newnode->prev = temp;
return (newnode);
}

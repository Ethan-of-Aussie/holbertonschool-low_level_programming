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

	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	  {
		while (newnode->next)
		newnode->next = *head;
	  }
	*head = newnode;
return (newnode);
}

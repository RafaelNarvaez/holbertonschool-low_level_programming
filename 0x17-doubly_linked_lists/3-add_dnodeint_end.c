#include "lists.h"

/**
 *add_dnodeint_end - add a new node at the end of a 2dlist
 *@head: head pointer
 *@n: constant node data
 *Return: address of the new element and/or NULL if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (!head)
		return (NULL);

	/*mem alloc for new node */
	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
			new->n = n;

	/* search for new data */
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	/*go to the last node & insert new data */
	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->next = NULL;
	new->prev = last;
	last->next = new;

	return (new);
}

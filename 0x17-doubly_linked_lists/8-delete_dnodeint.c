#include "lists.h"

/**
 *delete_dnodeint_at_index - dletes a node at given index
 *@head: a doubly linked list head pointer
 *@index: given index
 *Return: 1 if SUCCESS or -1 if Fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = NULL;

	/* No delete, Do nothing */
	if (head == NULL || *head == NULL)
		return (-1);

	/* delete 1st node */
	del = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	/* delete idx node if is within range */
	while ((index != 0) && (del->next != NULL))
	{
		index -= 1;
		del = del->next;
	}
	if (index == 0)
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
		free(del);
		return (1);
	}
	return (-1);
}

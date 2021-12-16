#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index, preserving list
 * @head: head of list
 * @idx: index to put node at
 * @n: integer data for new node
 * Return: pointer to new node at specified index, NULL if not found
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new;
	unsigned int counter = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (counter < idx)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		counter++;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}

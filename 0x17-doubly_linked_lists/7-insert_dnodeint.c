#include "lists.h"

/**
 *insert_node - adds a new node at a given index
 *@tmp: pointer to position in a doubly linked list
 *@n: data
 *Return: address of new node
 */

dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}

/**
 *insert_dnodeint_at_index - insert a new node at given position
 *@h: pointer to head
 *@idx: index
 *@n: data
 *Return: node address and/or NULL if fails or if not possible to add a node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	/*a new node is inserted or if if empty */
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);

	/* insert node at middle of list */
	tmp = *h;
	while ((idx != 0) && (tmp->next))
	{
		idx -= 1;
		tmp = tmp->next;
		if (idx == 0)
			return (insert_node(tmp, n));
	}

	/* insert EOL if idx after last node */
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}

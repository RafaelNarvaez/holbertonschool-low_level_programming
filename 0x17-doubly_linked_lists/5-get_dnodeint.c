#include "lists.h"

/**
 *get_dnodeint_at_index - returns node to index
 *@head: pointer to head of 2dlinked list
 *@index: a given index
 *Return: pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	/* iterates untill match or EOL */
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	/* if index is out of range */
	return (NULL);
}

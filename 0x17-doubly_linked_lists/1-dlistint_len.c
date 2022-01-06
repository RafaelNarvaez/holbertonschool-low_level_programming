#include "lists.h"

/**
 *dlistint_len - function that returns number of elements
 *to a double linked list
 *@h: pointer to head
 *Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}

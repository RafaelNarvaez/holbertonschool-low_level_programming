#include "lists.h"

/**
 *print_dlistint - prints the data of the doubly linked list
 *@h: pointer to head of list
 *Return: numbers of element
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
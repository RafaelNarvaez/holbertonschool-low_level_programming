#include "lists.h"

/**
 *print_list - prints all the elements of a given list
 *@h: singly linked list
 *Return: the amount of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int idx = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%i] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		idx++;
	}
	return (idx);
}

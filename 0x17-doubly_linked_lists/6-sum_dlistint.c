#include "lists.h"

/**
 *sum_dlistint - function that sums all data in 2dlinked list
 *@head: head(pointer) of the dlistint_t
 *Return: Sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}

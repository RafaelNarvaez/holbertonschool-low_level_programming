#include "lists.h"

/**
 *free_dlistint - function that frees a dlinked list
 *@head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}

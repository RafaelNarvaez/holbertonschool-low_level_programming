#include "lists.h"
int _strlen(const char *s);

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the first element of a list
 * @str: the string to be inserted
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen - returns the length of a given string
 * @s: a string
 * Return: number of characters in the string
 */

int _strlen(const char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}

#include "main.h"

/**
 *_strdup - duplicates a string and returns a new pointer
 *with the allocated memory
 *
 *@str: the pointer to copy
 *Return: a pointer with the copy of the string
 */

char *_strdup(char *str)
{
	char *newptr;
	int idx = 0, idy = 0;

	if (str == NULL)
		return (NULL);

	for (idx = 0; idx[str] != '\0'; idx++)
	;

	newptr = malloc(sizeof(char) * (idx + 1));

	if (newptr == NULL)
	{
		return (NULL);
	}

	for (idy = 0; idy[str] != '\0'; idy++)
	{
		newptr[idy] = str[idy];
	}
	newptr[idy] = '\0';
	return (newptr);
}

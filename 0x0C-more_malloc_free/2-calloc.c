#include "main.h"

/**
 * *_calloc - function allocates memory for an ptray
 * @nmemb: inside of the array
 * @size: similar to sizeof
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int idx, idy;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	idy = nmemb * size;

	ptr = malloc(idy);

	if (ptr == NULL)
		return (NULL);

	for (idx = 0; idx < idy; idx++)
	{
		ptr[idx] = 0;
	}

	return (ptr);
}


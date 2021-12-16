#include "main.h"

/**
 * *malloc_checked - prints allocated memory
 * @b: (parameter/int passed)
 * Return: pointer to allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

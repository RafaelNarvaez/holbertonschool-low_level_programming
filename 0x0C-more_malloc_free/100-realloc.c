#include "main.h"

/**
 * *_realloc - reallocates a memory of block, using malloc/free.
 * @ptr: pointer allocated with malloc(old size)
 * @old_size: bytes of alloced space in ptr.
 * @new_size: new size of new memory block.
 * Return: new pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;
	unsigned int idx;

	if (new_size > old_size)
	{
		n_ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	idx = new_size + old_size;
	n_ptr = malloc(idx);

	if (n_ptr == NULL)
		return (NULL);

	free(n_ptr);
	return (n_ptr);
}

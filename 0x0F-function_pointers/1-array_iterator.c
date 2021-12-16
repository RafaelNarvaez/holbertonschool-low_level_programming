#include "function_pointers.h"

/**
 *array_iterator - function that iterates an array
 *@array: array to iterate
 *@size: size of array
 *@action: pointer that will perform the fx
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx = 0;

	if (array == NULL || action == NULL)
		return;

	while (idx < size)
	{
		action(array[idx]);
		idx++;
	}
}

#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: start
 * @max: end
 * Return: pointer to beginning of array.
 */

int *array_range(int min, int max)
{
	int idx;
	int *range;

	if (min > max)
	{
		return (NULL);
	}

	range = malloc(sizeof(int) * ((max - min) + 1));

	if (range == NULL)
	{
		return (NULL);
	}

	for (idx = 0; min <= max; idx++)
	{
		range[idx] = min;
		min++;
	}

	return (range);
}

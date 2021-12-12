#include "main.h"

/**
 **alloc_grid - function that returns a pointer to
 *a 2d array of integers
 *@width: (parameter) size of
 *@height: (parameter) size of
 *Return: (2d pointer) and/or NULL if negative, 0 or failure
 */

int **alloc_grid(int width, int height)
{
	int **ddptr;
	int column, beam;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ddptr = malloc(sizeof(int *) * height);

	if (ddptr == NULL)
	{
		return (NULL);
	}

	for (column = 0; column < height; column++)
	{
		ddptr[column] = malloc(sizeof(int) * (width));

		if (ddptr[column] == NULL)
		{
			for (column -= 1; column >= 0; column--)
			{
				free(ddptr[column]);
			}
			free(ddptr);
			return (NULL);
		}
	}

	for (column = 0; column < height; column++)
	{
		for (beam = 0; beam < width; beam++)
		{
			ddptr[column][beam] = 0;
		}
	}
	return (ddptr);
}

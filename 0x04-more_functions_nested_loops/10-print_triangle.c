#include "main.h"

/**
 *print_triangle - function that prints a triangle
 *@size: the size of triangle (given parameter)
 */

void print_triangle(int size)
{
	int idx, idy;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (idx = 1; idx <= size; idx++)
	{
		for (idy = 1; idy <= size; idy++)
		{
			if (idy <= (size - idx))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

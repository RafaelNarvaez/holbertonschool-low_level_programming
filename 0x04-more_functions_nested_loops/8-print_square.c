#include "main.h"

/**
 *print_square - funtion that prints a square
 *@size: given parameter for the size of the square
 */

void print_square(int size)
{
	int sq, idx;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (sq = 0; sq < size; sq++)
	{
		for (idx = 0; idx <= size; idx++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}

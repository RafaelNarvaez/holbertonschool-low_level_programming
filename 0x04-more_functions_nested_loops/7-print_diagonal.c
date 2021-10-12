#include "main.h"

/**
 *print_diagonal - function that prints a diagonal line
 *@n: given parameter that represents the #'s of time
 */

void print_diagonal(int n)
{
	int d, s;

	for (d = 0; d < n; d++)
	{
		for (s = 0; s < d; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

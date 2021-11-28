#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - function that prints the sum of 2 diagonals
 *of a square matrix of integers
 *@a: pointer
 *@size: size of a pointer
 */

void print_diagsums(int *a, int size)
{
	int idx, n1, n2;
	double square2;

	square2 = (size * size);
	n1 = 0;
	n2 = 0;

	for (idx = 0; idx < square2; idx += (size + 1))
	{
		n1 += (a[idx]);
	}

	for (idx = size - 1; idx < square2; idx += (size - 1))
	{
		n2 += (a[idx]);
		square2--;

	}

	printf("%i, %i\n", n1, n2);
}

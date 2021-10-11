#include "main.h"
#include <stdio.h>

/**
 *print_array - function that prints an array of integers
 *@a: given parameter (pointer)
 *@n: given parameter (variable)
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		if (idx != n - 1)
			printf("%d, ", a[idx]);

		else
			printf("%d, ", a[idx]);
	}
	printf("\n");
}

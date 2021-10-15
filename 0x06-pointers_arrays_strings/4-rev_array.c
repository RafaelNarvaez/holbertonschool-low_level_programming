#include "main.h"

/**
 *reverse_array - function that reverse an array of integers
 *@a: given parameter or the aaray of integers
 *@n: parameter of the array
 */

void reverse_array(int *a, int n)
{
	int last = n - 1;
	int idx = 0;
	int hold = 0;

	for ( ; idx < last; idx++)
	{
		hold = a[idx];
		a[idx] = a[last];
		a[last] = hold;
		last--;
	}
}

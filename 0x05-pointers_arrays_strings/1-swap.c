#include "main.h"

/**
 *swap_int - function that swaps two integers
 *@a: 1st given parameter
 *@b: 2nd given parameter
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

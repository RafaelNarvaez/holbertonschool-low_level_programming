#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: a constant positive number
 * Return: the sum of n numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int idx;
	int res = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (idx = 0; idx < n; idx++)
	res += va_arg(list, unsigned int);

	va_end(list);
	return (res);
}

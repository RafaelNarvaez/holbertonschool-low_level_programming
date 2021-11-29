#include "main.h"

/**
 *sqrt_counter - compares two square roots numbers
 *@n: represents a number
 *@a: represents a number multiplied by itself
 *Return: the square root
 */

int sqrt_counter(int n, int a)
{
	if (a * a == n)
		return (a);

	if (a * a > n)
		return (-1);

	return (sqrt_counter(n, a + 1));
}

/**
 *_sqrt_recursion - returns the founded square root number
 *@n: represents a number
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	int a = 0;

	if (a == 1)
		return (1);

	if (a < 0)
		return (-1);

	return (sqrt_counter(n, a));
}

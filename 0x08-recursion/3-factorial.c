#include "main.h"

/**
 *factorial - Fx.that returns the factorial #
 *of the next given (n) variable
 *@n: the given number (Variable)
 *Return: (1) the Factorial number or (-1) if n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

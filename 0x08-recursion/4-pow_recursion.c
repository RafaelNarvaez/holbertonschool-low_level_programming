#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: represent the #
 *@y: represent the exponet
 *Return: the raised number
 *If not Success (-1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x = x * _pow_recursion(x, y - 1));
}

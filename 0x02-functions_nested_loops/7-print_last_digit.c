#include "main.h"
/**
 *print_last_digit - function that last digit of a given #
 *@idx: is the variable used to represent integer
 *Return: the integer
 */
int print_last_digit(int idx)
{
	idx = idx % 10;

	if (idx < 0)
		idx = -idx;
			_putchar(idx + '0');
	return (idx);
}

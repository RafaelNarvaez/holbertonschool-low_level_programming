#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n: points to a decimal number
 * @index: index from 0 to set
 * Return: 1 if success, or -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	clear = 1 << index;
	*n = (*n & (~(clear)));

	return (1);
}

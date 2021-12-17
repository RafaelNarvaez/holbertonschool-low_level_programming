#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a decimal number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	set = 1 << index;
	*n = (*n | set);

	return (1);
}

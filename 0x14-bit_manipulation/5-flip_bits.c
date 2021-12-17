#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * @n: a decimal number
 * @m: second decimal number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, Num = 0;

	flip = n ^ m;

	while (flip > 0)
	{
		if ((flip & 1) == 1)
			Num++;

		flip >>= 1;
	}

	return (Num);
}

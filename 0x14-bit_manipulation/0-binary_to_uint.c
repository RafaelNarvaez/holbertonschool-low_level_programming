#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0  and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int idx, len = 0;
	unsigned int decimal = 0, exponent = 0, bit = 0;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] == '0' || b[idx] == '1')
			len++;
		else
			return (0);
	}

	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] == '1')
			bit = 1;
		else if (b[len] == '0')
			bit = 0;

		decimal += bit << exponent;
		exponent++;
	}
	return (decimal);
}

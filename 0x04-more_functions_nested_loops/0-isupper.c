#include "main.h"

/**
 *_isupper - funtion that detects is uppercase character
 *@c: is the given varaiable (integer)
 *Return: 1 if is uppercase
 *Return: 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

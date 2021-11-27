#include "main.h"

/**
 **_memset - a fx that fill n bytes of memory
 * pointed by s using b as constatnt.
 *@s: the given string
 *@b: the constant
 *@n: the numbers of bytes that are passed to s
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		s[idx] = b;
	return (s);
}

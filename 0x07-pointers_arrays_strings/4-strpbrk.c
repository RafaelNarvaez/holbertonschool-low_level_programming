#include "main.h"
#include <stddef.h>

/**
 **_strpbrk - function that searches a string for any set of bytes
 *@s: the string
 *@accept: the matching #'s of bytes (by pointer s)
 *Return: pointer to S and/or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int idx, idy;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idy = 0; accept[idy] != '\0'; idy++)
		{
			if (s[idx] == accept[idy])
			{
				return (&s[idx]);
			}
		}
	}
	return (NULL);
}

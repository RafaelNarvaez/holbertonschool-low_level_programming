#include "main.h"

/**
 *_strspn - function that gets the length of a prefix
 *@s: string (pointer)
 *@accept: the length of bytes
 *Return: the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int idx, idy;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (idy = 0; accept[idy] != s[idx]; idy++)
		{
			if (accept[idy] == '\0')
				return (idx);
		}
	}
	return (idx);
}

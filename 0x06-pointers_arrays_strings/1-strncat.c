#include "main.h"

/**
 **_strncat - function that concatenates 2 strings
 *@dest: parameter used for the destination variable
 *@src: the source variable (parameter)
 *@n: number variable
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int idx, idy;

	for (idx = 0; dest[idx] != '\0'; idx++)
		;

	for (idy = 0; src[idy] != '\0' && idy < n; idy++)
	{
		dest[idx] = src[idy];
		idx++;
	}

	if (idy < n)
	{
		src[idy] = '\0';
	}
	return (dest);
}

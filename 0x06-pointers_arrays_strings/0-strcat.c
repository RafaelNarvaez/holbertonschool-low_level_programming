#include "main.h"


/**
 **_strcat - function that concatenantes 2 strings
 *@dest: given parameter used as the destination variable
 *@src: given parameter (sourde variable)
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int idx, idy;

	for (idx = 0; dest[idx] != '\0'; idx++)
		;

	for (idy = 0; src[idy] != '\0'; idy++)
	{
		dest[idx] = src[idy];
		idx++;
	}
	return (dest);
}

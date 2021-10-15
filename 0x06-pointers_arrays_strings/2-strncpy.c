#include "main.h"

/**
 **_strncpy - function that copy a string
 *@dest: parameter used as destination variable
 *@src: parameter used as the source variable
 *@n: numbers
 *Return: the copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int pox = 0;

	for ( ; pox < n && src[pox] != '\0'; pox++)
		dest[pox] = src[pox];

	for ( ; pox < n; pox++)
		dest[pox] = '\0';

	return (dest);
}

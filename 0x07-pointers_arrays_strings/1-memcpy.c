#include "main.h"
#include <stdio.h>
/**
 **_memcpy - function that copies a memory
 *@dest: destination of the copied memory
 *@src: the source of the memory
 *@n: #'s of bytes of the memory
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		dest[idx] = src[idx];
	return (dest);
}

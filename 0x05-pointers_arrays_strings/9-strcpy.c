#include "main.h"

/**
 **_strcpy - function that copy a string
 *@dest: given parameter (pointer that return the value)
 *@src: given parameter (points the string)
 *Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	int idx, idy = 0;

		for (idx = 0; src[idx] != '\0'; idx++)
		{
			idy++;
		}

	for (idx = 0; idx <= idy; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}


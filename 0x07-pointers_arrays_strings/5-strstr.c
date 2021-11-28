#include "main.h"
#include <stddef.h>

/**
 **_strstr - function that locates a substring
 *@haystack: the given string
 *@needle: the given substring
 *Return: the pointer of the substring and/or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int idx, idy, dist;

	for (dist = 0; needle[dist] != '\0'; dist++)

		for (idx = 0; haystack[idx] != '\0'; idx++)
		{
			for (idy = 0; needle[idy] != '\0'; idy++)
			{
				if (haystack[idx + idy] != needle[idy])
				{
					break;
				}
			}
			if (idx == dist)
			{
				return (&haystack[idx]);
			}

		}
	return (NULL);
}

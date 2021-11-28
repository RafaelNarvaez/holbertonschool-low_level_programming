#include "main.h"
#include <stddef.h>

/**
 **_strchr - function that locates a character in a string
 *@s: the string (pointer)
 *@c: the character
 *Return: a pointer with the first occurence
 */

char *_strchr(char *s, char c)
{

	for ( ; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

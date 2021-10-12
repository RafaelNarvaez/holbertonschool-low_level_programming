#include "main.h"

/**
 *_strlen - function that returns the length of a string
 *@s: the given pointer (string)
 *Return: the length
 */

int _strlen(char *s)
{
	int string = 0;

	while (s[string] != '\0')
		string++;
			return (string);
}

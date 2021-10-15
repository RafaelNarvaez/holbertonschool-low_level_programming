#include "main.h"

/**
 *_strcmp - function that compares 2 strings
 *@s1: given parameter for string #1
 *@s2: second parameter for string #
 *Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int str = 0;

	while (s1[str] == s2[str] && s1[str] != '\0')
		str++;
	return (s1[str] - s2[str]);
}

#include "main.h"

/**
 * _strlen_recursion - Fx. that returns the length of a string
 *@s: the string (Pointer)
 *Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}

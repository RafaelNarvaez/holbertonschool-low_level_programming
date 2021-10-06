#include "main.h"
/**
 *_isalpha - checks for lower and uppercase characters
 *@c: character parameters
 *Return: 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

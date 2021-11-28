#include "main.h"

/**
 *_puts_recursion - fx. that px a string follow by a New Line ('\n')
 *@s: the given string (and Pointer)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}

#include "main.h"

/**
 *print_line - funtion that prints a straight line
 *@n: given variable
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

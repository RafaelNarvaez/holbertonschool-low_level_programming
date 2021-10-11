#include "main.h"

/**
 *puts2 - function that prints every other character
 *@str: the given pointer (string)
 */

void puts2(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (idx % 2 != 0)
			continue;

		_putchar(str[idx]);
	}
	_putchar('\n');
}

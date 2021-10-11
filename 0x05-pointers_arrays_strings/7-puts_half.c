#include "main.h"

/**
 *puts_half: function that prints half of a string
 *@str: given parameter
 */

void puts_half(char *str)
{
	int idx, arraySize, temp;

	arraySize = 0;
	temp = 0;

		for (idx = 0; str[idx] != '\0'; idx++)
		{
			arraySize++;
		}
	arraySize--;

	if (arraySize % 2 != 0)
	{
		arraySize = ((arraySize - 1) / 2);
	}
	else
		arraySize = (arraySize / 2);

	for (idx = temp + 1; idx <= arraySize; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}

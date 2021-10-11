#include "main.h"

/**
 *puts_half - function that prints half of a string
 *@str: given parameter
 */

void puts_half(char *str)
{
	int idx, arraySize, printSize;

	arraySize = 0;
	printSize = 0;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		arraySize++;
	}

	arraySize--;

	if (arraySize % 2 != 0)
	{
		printSize = ((arraySize - 1) / 2);
	}
	else
		printSize = (arraySize / 2);

	for (idx = printSize + 1; idx <= arraySize; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}

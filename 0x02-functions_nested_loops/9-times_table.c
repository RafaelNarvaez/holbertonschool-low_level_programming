#include "main.h"
/**
 *times_table - function that prints 9 times table *
 */

void times_table(void)
{
	int idx, mult, idy = 0;

	for (idx = 0; idx < 10; idx++)
	{
		_putchar('0');

		for (idy = 1; idy < 10; idy++)
		{
			_putchar(',');
			_putchar(' ');
			mult = idx * idy;
			if (mult >= 10)
			{
				_putchar((mult / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 *more_numbers - prints from 0 to 14
 */

void more_numbers(void)
{
	int idx, idy;

	for (idy = 0; idy <= 9; idy++)
	{
		for (idx = 0; idx <= 14; idx++)
		{
			if (idx >= 10)
			{
				_putchar(idx / 10 + '0');
			}
			_putchar(idx % 10 + '0');
		}
		_putchar('\n');
	}
}

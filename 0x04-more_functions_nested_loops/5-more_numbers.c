#include "main.h"

/**
 *more_numbers - prints from 0 to 14
 */

void more_numbers(void)
{
	int idx, idy;

	for (idx = 0; idx <= 9; idx++)
	{
		for (idy = 0; idy <= 14; idx++)
		{
			if (idy >= 10)
			{
				_putchar(idy / 10 + '0');
			}
			_putchar(idy % 10 + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 *print_alphabet_x10 - function that prints the alphabet
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int idx;
	int idy;

	for (idy = 0; idy < 10; idy++)
	{
		idx = 'a';
		while (idx <= 'z')
		{
			_putchar(idx);
			idx++;
		}
		_putchar('\n');
	}
}

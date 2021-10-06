#include "main.h"
/**
 *print_alphabet - function that prints the alphabet
 *Return: 0
 */
void print_alphabet(void)
{
	int idx = 'a';

	while (idx <= 'z')
	{
		_putchar(idx);
		idx++;
	}
	_putchar('\n');
}

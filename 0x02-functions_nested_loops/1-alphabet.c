#include "main.h"
/**
 *print_alphabet - function that prints the alphabet
 *Return: 0
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

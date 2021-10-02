#include <stdio.h>
/**
 *main - function that prints the alphabet
 *Return: 0
 */

int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}

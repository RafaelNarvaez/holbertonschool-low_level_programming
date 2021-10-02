#include <stdio.h>
/**
 *main - function that prints the alphabet
 *Return: 0
 */

int main(void)
{
	int a = 48;
	int b = 'a';

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}

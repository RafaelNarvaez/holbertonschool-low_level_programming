#include <stdio.h>
/**
 *main - function that prints the alphabet
 *Return: 0
 */

int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - function that prints numbers up to 98
 *@n: given parameter
 *Return: empty *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}

#include <stdio.h>
#include "main.h"

/**
 *main - function (Fizz Buzz)
 *Return: 0
 */

int main(void)
{
	int idx;

		for (idx = 1; idx <= 99; idx++)
		{
			if (idx % 3 == 0 && idx % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (idx % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (idx % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%i ", idx);
			}
		}
		printf("Buzz");
		putchar('\n');
		return (0);
}

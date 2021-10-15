#include "main.h"

/**
 **leet - function that encodes string into 1337
 *@n: parameter used for the array of string
 *Return: string
 */

char *leet(char *n)
{
	int idx, idy;
	char w[] = "aAeEoOtTlL";
	char i[] = "4433007711";

	for (idx = 0; n[idx] != '\0'; idx++)
	{
		for (idy = 0; w[idy] != '\0'; idy++)
		{
			if (w[idy] == n[idx])
			{
				n[idx] = i[idy];
			}
		}
	}
	return (n);
}

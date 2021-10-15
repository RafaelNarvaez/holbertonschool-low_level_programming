#include "main.h"

/**
 **cap_string - function that capitalizes all words
 *@cap: parameter used for the strings*
 *Return: characters
 */

char *cap_string(char *cap)
{
	int idx, idy;
	int flag = 1;
	char sep[] = {'\t', '\n', ' ', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}'};

	for (idx = 0; cap[idx] != '\0'; idx++)
	{
		if (flag == 1)
		{
			if ((cap[idx] > 96) && (cap[idx] < 123))
				cap[idx] -= 32;
			flag = 0;
		}

		for (idy = 0; sep[idy] != '\0'; idy++)
		{
			if (cap[idx] == sep[idy])
				flag = 1;
		}
	}
	return (cap);
}

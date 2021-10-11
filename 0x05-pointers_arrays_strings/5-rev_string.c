#include "main.h"

/**
 *rev_string - function that reverse a string
 *@s: given parameter
 */

void rev_string(char *s)
{
	int idx, idy;
	char temp;

	for (idx = 0; s[idx] != '\0'; idx++)
	;
	for (idy = 0, idx--; idy <= idx; idy++, idx--)
	{
		temp = s[idx];
		s[idx] = s[idy];
		s[idy] = temp;
	}
}


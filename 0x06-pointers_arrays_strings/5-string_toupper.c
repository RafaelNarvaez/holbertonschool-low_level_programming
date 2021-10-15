#include "main.h"

/**
 **string_toupper - functioin that swapps from lowercase to uppercase
 *@up: parameter used
 *Return: the swapped strings
 */

char *string_toupper(char *up)
{
	int idx = 0;

	while (up[idx] != '\0')
		idx++;
	{
		if (up[idx] > 96 && up[idx] < 123)
			up[idx] -= 32;
	}
	return (up);
}

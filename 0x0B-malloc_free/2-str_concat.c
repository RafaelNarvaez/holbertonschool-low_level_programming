#include "main.h"

/**
 **str_concat - Fx that concatenates 2 strings
 *@s1: (parameter) Array of strings
 *@s2: 2nd set of parameters to copy
 *Return: (a pointer & NULL) concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *newConcStr;
	int idx, idy = 2, idxy = 0;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		idxy++;
	}
	for (idx = 0; s2[idx] != '\0'; idx++)
	{
		idxy++;
	}

	newConcStr = malloc((idxy + 1) * sizeof(char));

	if (newConcStr == NULL)
	{
		return (NULL);
	}

	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		newConcStr[idx] = s1[idx];
	}
	for (idy = 0; s2[idy] != '\0'; idy++)
	{
		newConcStr[idx] = s2[idy];
		idx++;
	}
	newConcStr[idx] = '\0';

	return (newConcStr);
}

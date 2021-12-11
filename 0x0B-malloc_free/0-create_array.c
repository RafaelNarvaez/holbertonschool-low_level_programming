#include "main.h"

/**
 **create_array - func. that creates an array of char's
 *@size: the size of the array
 *@c: the char to fill the array
 *Return: a pointer with char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *pointer;

	if (size == 0)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(char) * size);

	if (pointer == NULL)
	{
	return (NULL);
	}

	idx = 0;
	while (idx < size)
	{
		pointer[idx] = c;
		idx++;
	}
	return (pointer);
}

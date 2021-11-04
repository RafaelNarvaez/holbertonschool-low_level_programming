#include "function_pointers.h"

/**
 *print_name - function that prints a given name
 *@name: the given string that represents a name
 *@f: pointer to a function which includes a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

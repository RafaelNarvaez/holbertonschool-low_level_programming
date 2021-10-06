#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer
 *@idx: is the variable used to represent integer
 *Return: the integer
 */
int _abs(int idx)
{
	if (idx < 0)
		return (idx * -1);
	else
		return (idx);
}

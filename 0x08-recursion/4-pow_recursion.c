#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - calculate x raised to the power of y recursively
 * @y: the exponent
 * @x: the base number
 * Return: x^y or -1 when y is negative (error)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

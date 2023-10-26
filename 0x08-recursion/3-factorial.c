#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculate the factorial of the number
 * @n: number to calculate the factorial of
 * Return: the factorial of the number, -1 for errors
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

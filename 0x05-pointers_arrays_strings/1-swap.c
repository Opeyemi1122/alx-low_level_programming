#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is now b
 * @b: is now a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

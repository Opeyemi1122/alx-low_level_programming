#include "main.h"

/**
 * print_last_digit - print the last digit of a number using % 10.
 *@r: print last digit of number
 * Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
	int k;

	k = r % 10;
	if (r < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}

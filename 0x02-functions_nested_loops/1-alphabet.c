#include "main.h"

/**
 *main - prints alphabet in lowercase then new line
 *
 *Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a;
	char i;

	for (a = 0; a < 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	}
}

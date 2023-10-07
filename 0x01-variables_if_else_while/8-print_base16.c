#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char e;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (e = 'a'; e <= 'f'; e++)
		putchar(e);

	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all alphabets in lowercase except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * characters are*
	 */
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alph[i]);
	}

	putchar('\n');
	return (0);
}

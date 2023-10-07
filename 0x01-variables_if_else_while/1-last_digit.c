#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Prints the last digit of the number stored in a variable.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (1 > 5)
	{
		printf("Last digit of %i and is greater than 5\n", n);
	}
	else if (l == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

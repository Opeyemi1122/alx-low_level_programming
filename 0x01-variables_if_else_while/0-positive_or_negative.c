#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Determines if a number is positive, negative or zero.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	/*
	 * function to check random number is positive or negative
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}

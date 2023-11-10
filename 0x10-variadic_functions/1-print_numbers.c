#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints the numbers followed by a new line.
 * @separator: the strings printed between numbers
 * @n: A variable number of paramters to calculate the sum of.
 * @...: variable numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}

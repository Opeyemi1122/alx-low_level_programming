#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary to integers
 * @b: points to a string of 0 and 1 characters
 * converts binary to unsigned int
 * Return: unisgned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);/* no string to convert*/

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
	}
	return (result);
}

#include "main.h"

/**
 * _islower - lower character to find
 * @c: identifying the lowercase char
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

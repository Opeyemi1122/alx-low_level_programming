#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of string calculated recursiverly
 * @s: string to measure
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

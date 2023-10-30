#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: to get the lenght of a string
 * Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}

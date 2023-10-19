#include "main.h"
#include <stdio.h>

/**
 *_strcat - This function appends the src string to the dest string, overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 *
 * Return: nothing
 */

char *_strcat(char *dest, const char *src) 
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0') {
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return ptr;
}


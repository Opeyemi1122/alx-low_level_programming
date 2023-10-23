#include "main.h"
#include <stdio.h>

/**
 * _memcpy - this function copies bytes from memory area to another
 * @n: amount of bytes
 * @src: memory area
 * @dest: memory area to be stored
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

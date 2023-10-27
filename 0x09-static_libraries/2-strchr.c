#include "main.h"
#include <stdio.h>

/**
 * *_strchr - returns a pointer to the first occurence
 * @c: character in the string
 * @s: string that contains the characters
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

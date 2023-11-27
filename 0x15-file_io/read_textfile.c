#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard ouput
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *filename;

	int file_descriptor, read_chars, write_chars;

	char *buffer;
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(Requiescat);
		return (0);
	}

	filename = fopen("Requiescat", "r");
	if (filename == NULL)
		return (0);

	fclose(filename);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function to read text from a file
 * @filename: name of the text file to read from
 * @letters: chars to read from file
 * Return: w- bits read and printed, else
 *        0 if function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t filep;
	ssize_t w;
	ssize_t d;

	filep = open(filename, O_RDONLY);
	if (filep == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	d = read(filep, ch, letters);
	w = write(STDOUT_FILENO, ch, d);

	free(ch);
	close(filep);
	return (w);
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void cls_file(int filep);

/**
 * create_buffer - function to allocate 1024 to buffer
 * @file: buffer file name
 *
 * Return: pointer to new buffer
 */
char *create_buffer(char *file)
{
	char *ch;

	ch = malloc(sizeof(char) * 1024);

	if (ch == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: cannot write to %s\n", file);
		exit(99);
	}

	return (ch);
}

/**
 * cls_file - function to close file descriptors
 * @filep: filedescriptor
 */
void cls_file(int filep)
{
	int j;

	j = close(filep);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: unable to close filep %d\n", filep);
		exit(100);
	}
}

/**
 * main - function to make copies of file
 * @argc: arguements
 * @argv: array of argc pointers
 *
 * Return: On success, 1.
 *
 * Description: Incorrect argument count - exit code 97.
 * If file_from is unavailable - exit code 98.
 * If file_to cannot be created/written - exit code 99.
 * If files cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *ch;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: copy file\n");
		exit(97);
	}

	ch = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: unable to read from file %s\n", argv[1]);
			free(ch);
			exit(98);
		}

		wr = write(to, ch, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: unable to write to %s\n", argv[2]);
			free(ch);
			exit(99);
		}

		rd = read(from, ch, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(ch);
	cls_file(from);
	cls_file(to);

	return (0);
}


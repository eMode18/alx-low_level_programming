#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fdes);

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
			"Error: Unable to allocate memory for %s\n",
			file);
		exit(99);
	}

	return (ch);
}

/**
 * close_file - function to close file descriptors
 * @fdes: filedescriptor to close
 */

void close_file(int fdes)
{
	int close_result;

	close_result = close(fdes);

	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fdes %d\n", fdes);
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
	int fd_from, fd_to, read_result, write_result;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: copy file\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	read_result = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_result = write(fd_to, buffer, read_result);
		if (fd_to == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_result = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_result > 0);

	free(buffre);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}


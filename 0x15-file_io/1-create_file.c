#include "main.h"

/**
 * create_file - function to create a file
 * @filename: pointer to filename to create
 * @text_content: string pointer to file input
 *
 * Return: On failure - -1.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int filep, w, dis = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dis = 0; text_content[dis];)
			dis++;
	}

	filep = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filep, text_content, dis);

	if (filep == -1 || w == -1)
		return (-1);

	close(filep);

	return (1);
}


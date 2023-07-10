#include "main.h"

/**
 * append_text_to_file - function to append text to string.
 * @filename: filename pointer.
 * @text_content: string to append to file end.
 *
 * Return: If not successful - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wr, pos = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pos = 0; text_content[pos];)
			pos++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, pos);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}


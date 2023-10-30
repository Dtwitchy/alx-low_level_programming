#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 on fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int n_write;
	int len;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_write = 0; text_content[n_write]; n_write++)
		;

	len = write(file_d, text_content, n_write);

	if (len == -1)
		return (-1);

	close(file_d);

	return (1);
}

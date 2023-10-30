#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t rit, rid;
	char *buff;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	rit = read(file_d, buff, letters);
	rid = write(STDOUT_FILENO, buff, rit);

	close(file_d);

	free(buff);

	return (rid);
}

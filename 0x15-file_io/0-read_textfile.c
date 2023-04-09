#include "main.h"

/**
 * read_textfile - read the text from a file and print on terminal
 * @filename: pointer of file that contains the texte
 * @letters: number of characters to read and print
 *
 * Return: number of characters readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
		return (0);

	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite == -1 || nread != nwrite)
		return (0);
	free(buffer);

	close(fd);
	return (nwrite);
}

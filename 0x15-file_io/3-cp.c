#include "main.h"

/**
 * copy_from_file_to_file - copy the contain of file into another file
 * @filenameFirstFile: file which contains the text
 * @filenameSecondFile: file which receive the text
 *
 * Return: 1 if succeeded
 */
int copy_from_file_to_file(const char *filenameFirstFile, const char *filenameSecondFile)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	if (filenameFirstFile == NULL)
		error_on_file(filenameFirstFile, 98);

	fd = open(filenameFirstFile, O_RDONLY);
	if (fd == -1)
		error_on_file(filenameFirstFile, 98);

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}
	nread = read(fd, buffer, 1024);
	if (nread == -1)
		error_on_file(filenameFirstFile, 98);

	fd_close(fd);

	fd = open(filenameSecondFile, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
		error_on_file(filenameSecondFile, 99);

	nwrite = write(fd, buffer, nread);
	if (nwrite == -1 || nwrite != nread)
		error_on_file(filenameSecondFile, 99);
	free(buffer);

	fd_close(fd);
	return (1);
}

/**
 * error_on_file - print text error when file doesn't exist, can't readed or witten
 * @file: name of file
 * @error: code error
 *
 * Return: Nothing
 */
void error_on_file(const char *file, int error)
{
	dprintf(2, "Error: Can't read from file %s\n", file);
	exit(error);
}

/**
 * fd_close - close the file descriptor
 * @fd: value of the file descriptor
 *
 * Return: Nothing
 */
void fd_close(int fd)
{
	int nclose;

	nclose = close(fd);
	if (nclose == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

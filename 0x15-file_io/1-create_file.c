#include "main.h"

/**
 * create_file - create file and add a contain
 * @filename: name of file to create
 * @text_content: the contains to add into file
 *
 * Return: 1 if succeeded of -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int n, fd;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	
	n = 0;
	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)
			;
	}

	nwrite = write(fd, text_content, n);
	if (nwrite == -1)
		return (-1);

	close(fd);
	return (1);
}

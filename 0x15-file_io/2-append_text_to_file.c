#include "main.h"

/**
 * append_text_to_file - add contain at the end of file
 * @filename: pointer of the name of file
 * @text_content: contain to add at the end of file
 *
 * Return: 1 if succeeded or -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);
	
	len = 0;
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	nwrite = write(fd, text_content, len);
	if (nwrite == -1)
		return (-1);

	close(fd);
	return (1);
}

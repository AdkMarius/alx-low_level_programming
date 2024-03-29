#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_from_file_to_file(const char *filenameFirstFile, const char *filenameSecondFile);
void fd_close(int fd);
void error_on_file(const char *file, int error);

#endif

#ifndef HEADER_FILE
#define HEADER_FILE

#define BUFSIZE 1024

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void read_file(const char *file_from);
void cp_file(const char *file_from, const char *file_to);

#endif

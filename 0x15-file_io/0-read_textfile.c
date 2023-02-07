#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to
* POSIX standard ouptout.
* @filename: pointer to the file structure
* @letters: number of characters to ouptout
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t read_count, write_count;
char *buff;
if (!filename)
{
return (0);
}
/* open the file */
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
/* allocate buffer to store the content of the file*/
buff = malloc(sizeof(char) * letters);
if (!buff)
{
return (0);
}
/* read the content of the file*/
read_count = read(fd, buff, letters);
if (read_count == -1)
{
free(buff);
return (0);
}
/* Write the content of the buffer to standard output */
write_count = write(STDOUT_FILENO, buff, read_count);
if (write_count == -1 || write_count != read_count)
{
free(buff);
return (0);
}
/* free the buffer and return the number of letters read */
free(buff);
close(fd);
return (read_count);
}

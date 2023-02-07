#include "main.h"

/**
*read_file - function reads the file_to
*@file_from: pointer to the file structure
*/
void read_file(const char *file_from)
{
int fd_from;
/* if open file fails dprintf to STDERR_FILENO */
if ((fd_from = open(file_from, O_RDONLY)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
close (fd_from);
}

/**
 * cp_file - Copy the content of a file to another file
 * @file_from: File to copy from
 * @file_to: File to copy to
 */

void cp_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
char buf[BUFSIZE];
ssize_t read_count, write_count;

/* if reading and writing file fail, dprintf into STDERR_FILENO */
if ((fd_to = open(file_from, O_RDONLY)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
if ((file_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)) == -1)
{
dprintf(STDERR_FILENO, "Eror: Can't write to %s\n", file_to);
exit(99);
}
while ((read_count = read(fd_from, buf, BUFSIZE)) > 0)
{
if ((write_count = write(fd_to, buf, read_count)) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
lose(fd_from);
close(fd_to);
exit(99);
}
}

if (read_count == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close(fd_from);
close(fd_to);
exit(98);
}

if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from == -1 ? fd_from : fd_to);
exit(100);
}
}
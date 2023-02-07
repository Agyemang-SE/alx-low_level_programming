#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function appends text at the end of  a file
 * @filename: pointer to the file structure
 * @text_content: content of the text
 * Return: 1 on success, 0 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t write_count;
/* check for invalid inputs */
if (!filename)
{
return (-1);
}
if (!text_content)
{
return (-1);
}
/* open the file in append mode */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
/* write the contents of the buffer to the file */
write_count = write(fd, text_content, strlen(text_content));
if (write_count == -1)
{
close(fd);
return (-1);
}
/* close the file and return 1 for success */
close(fd);
return (1);
}

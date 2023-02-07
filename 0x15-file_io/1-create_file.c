#include "main.h"
#include <string.h>

/**
* create_file - function creates a file
* @filename: pointer to the file structure
* @text_content: content of the file
* Return: 1 on success
*/

int create_file(const char *filename, char *text_content)
{
int fd, len, written;
/* check for invallid inputs */
if (filename == NULL)
{
return (-1);
}
/* openning file in create mode with rw------*/
fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(fd);
return (1);
}
len = strlen(text_content);
/* writing into the file */
written = write(fd, text_content, len);
if (written == -1 || written != len)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}

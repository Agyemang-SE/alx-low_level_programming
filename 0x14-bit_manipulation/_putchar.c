#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the charaater c to stdout
 * @c: The character to print
 * 
 * Return: 1 on success
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}

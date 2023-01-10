#include <stdio.h>

/**
 * main - functions prints cmd arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

#include <stdio.h>

/**
 * main - function takes cmd args and prints out the number of argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
(void)argc;
(void)argv;

printf("%d\n", argc - 1);
return (0);
}

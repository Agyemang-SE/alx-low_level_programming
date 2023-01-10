#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies to numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success and 1 otherwise
*/

int main(int argc, char *argv[])
{
int i;
int res = 1;

(void)argc;
(void)argv;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
res = res *atoi(argv[i]);
}
printf("%d\n", res);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

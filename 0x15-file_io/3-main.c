#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98, 99 or 100 on failure
 */
 int main(int argc, char *argv[]) {
     if (argc != 3) {
         dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
         exit(97);
     }

     read_file(argv[1]);
     cp_file(argv[1], argv[2]);
     return 0;
 }

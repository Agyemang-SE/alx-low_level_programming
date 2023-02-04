#include "main.h"
#include <stdio.h>

/**
 * print_binary - function prints binary representation
 * of a number
 * @n: number parameter
 */ 

void print_binary(unsigned long int n)
{
unsigned long int i;
unsigned long int mask = 1u << 31;

for (i = 0; i < 32; i++)
{
_putchar(((n & mask) == 0) ? '0' : '1');
n <<= 1;
}
_putchar('\n');
}

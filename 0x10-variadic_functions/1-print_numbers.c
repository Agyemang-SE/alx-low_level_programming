#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers
 * followed by a new line
 *
 * @separator: paramter to separate numbers
 * @n: integer parameter
 *
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

separator = (separator != NULL) ? separator : "";

va_start(args, n);

for (i = 0; i < n; i++)
{
if (i > 0)
{
printf("%s", separator);
}
printf("%d", va_arg(args, int));
}

putchar(10);

va_end(args);
}

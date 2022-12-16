#include "main.h"

/**
 * postive_or_negative - Print whether a number is positive or negative
 *@i: The character to be checked

 * Return: return one of the 3 options
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}

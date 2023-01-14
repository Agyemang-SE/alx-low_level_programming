#include <stdlib.h>
#include "main.h"

/**
* free_grid - function frees a 2d grid previously
* created by your alloc grid function
* @grid: parameter
* @height: parameter
*
*/

void free_grid(int **grid, int height)
{
int i;

if (grid == 0 || height == 0)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

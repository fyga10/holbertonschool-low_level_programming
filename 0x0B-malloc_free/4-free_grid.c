#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free
 * @grid: Check array
 * @height: Check
 */
void free_grid(int **grid, int height)
{
int a = 0;
while (a < height)
free(grid[a]);
a++;
free(grid);
}

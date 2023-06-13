#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function to free a  2dimention array
 * @grid: 2 dimentional array
 * @height: grid's height
 * Description: free grid mem
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int rel;

	for (rel = 0; rel < height; rel++)
	{
		free(grid[rel]);
	}
	free(grid);
}


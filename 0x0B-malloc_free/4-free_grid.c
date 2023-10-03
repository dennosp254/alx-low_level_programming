#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - frees a two dimensional grid previously created by
  * alloc_grid: matrix double pointer
  * @grid: matrix double pointer
  * @height: rows (pointer)
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}

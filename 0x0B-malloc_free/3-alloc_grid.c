#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - alloc 2d array
 * @width: column of array
 * @height: row of array
 * Return: return array double pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	arr = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

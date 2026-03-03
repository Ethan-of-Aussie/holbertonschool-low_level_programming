#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *alloc_grid - return pointer to a 2D array of ints
 *
 *@width: The rows
 *@height: The columns
 *Return: the output - arr
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h;

	if (width < 1 || height < 1)
	return (NULL);
	arr = malloc(height * sizeof(int *));
	if (!arr)
	return (NULL);

	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(width * sizeof(int *));
		if (!arr[h])
		{
		for (w = 0; w < h; w++)
		free(arr[w]);

		free(arr);
		return (NULL);
		}
		for (w = 0; w < width; w++)
		arr[h][w] = 0;
		}
		return (arr);
}

#include "main.h"

/**
 * alloc_grid - create a 2d arrray of integers
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: NULL on failure
 * pointer to 2d array on success
*/
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (height < 1 || width < 1)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			/* Free everything on malloc failure. */
			/* Current malloc failed, no need to free null ptr. */
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

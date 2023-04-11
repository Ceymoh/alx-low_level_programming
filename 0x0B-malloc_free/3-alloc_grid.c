#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - gives two dimension array of integers
 * @width: value integer used
 * @height: integer value used
 * Return: on failure return NULL
 *
 */

int **alloc_grid(int width, int height)

{
	int i, j;
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)

		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = malloc(sizeof(int) * width);
		if (n[i] == NULL)
		{
			for (; i >= 0; i--)
				free(n[i]);
			free(n);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)

			n[i][j] = 0;
	}
	return (n);
}

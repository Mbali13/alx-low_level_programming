#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - ...
 * @width: ...
 * @height: ...
 * Return: ...
 */

int **alloc_grid(int width, int height)
{
	int i, g, k, b;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (g = 0 ; g >= 0 ; g--)
			{
				free(a[g]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0 ; k < height ; k++)
	{
		for (b = 0 ; b < width ; b++)
		{
			a[k][b] = 0;
		}
	}

	return (a);
}

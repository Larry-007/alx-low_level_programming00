#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop  to make a grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **lino;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	lino = malloc(sizeof(int *) * height);

	if (lino == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		lino[x] = malloc(sizeof(int) * width);

		if (lino[x] == NULL)
		{
			for (; x >= 0; x--)
				free(lino[x]);

			free(lino);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			lino[x][y] = 0;
	}

	return (lino);
}


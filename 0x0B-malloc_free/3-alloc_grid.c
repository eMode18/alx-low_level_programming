#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a grid using nested loops
 * @width: grid width
 * @height: grid height
 * Return: a 2d array pointer
 */
int **alloc_grid(int width, int height)
{
	int **mvalue;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	mvalue = malloc(sizeof(int *) * height);

	if (mvalue == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		mvalue[m] = malloc(sizeof(int) * width);

		if (mvalue[m] == NULL)
		{
			for (; m >= 0; m--)
				free(mvalue[m]);

			free(mvalue);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			mvalue[m][n] = 0;
	}

	return (mvalue);
}


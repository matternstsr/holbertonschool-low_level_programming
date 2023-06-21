#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array with each at 0
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **multi;
	int multihight;
	int widthmulti;

	if (width <= 0 || height <= 0)
		return (NULL);

	multi = malloc(sizeof(int *) * height);

	if (multi == NULL)
		return (NULL);

	for (multihight = 0; multihight < height; multihight++)
	{
		multi[multihight] = malloc(sizeof(int) * width);

		if (multi[multihight] == NULL)
		{
			for (; multihight >= 0; multihight--)
				free(multi[multihight]);

			free(multi);
			return (NULL);
		}
	}

	for (multihight = 0; multihight < height; multihight++)
	{
		for (widthmulti = 0; widthmulti < width; widthmulti++)
			multi[multihight][widthmulti] = 0;
	}

	return (multi);
}


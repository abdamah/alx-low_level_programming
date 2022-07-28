#include "main.h"

/**
* array_range - creates an array of given integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: int *
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ptr[j] = i;
			j++;
		}
		return (ptr);
	}
	else
		return (NULL);

}

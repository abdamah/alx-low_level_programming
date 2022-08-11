#include "function_pointers.h"
/**
 * int_index - searches for an integer element from an array.
 *
 * @array: pointer to an int array
 * @size: size of the array
 * @cmp: pointer to a function that receives an int
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int element;
	int index;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			element = cmp(array[index]);
			if (element > 0)
				return (index);
		}
	}

	return (-1);
}

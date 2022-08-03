#include "function_pointers.h"
/**
 * array_iterator - executes a functionas parameter of each element of an array
 *
 * @array: int array pointer
 * @size: size_t of the array.
 * @action: pointer to a function that receives an int
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (action && array)
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
}

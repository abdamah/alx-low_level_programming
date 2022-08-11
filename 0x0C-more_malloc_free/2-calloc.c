#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory
*
*Return: void *
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			ptr[i] = 0;
		return (ptr);
	}
	else
		return (NULL);
}

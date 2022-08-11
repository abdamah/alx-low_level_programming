#include "lists.h"
/**
 * list_len - returns the numbers of elements in list_t
 * @h: pointer constant of type list_t
 *
 * Return: numbers of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

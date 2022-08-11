#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: pointer constant  of type list_t
 *
 * Return: the numbers of count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");

		count++;
		h = h->next;
	}
	return (count);
}

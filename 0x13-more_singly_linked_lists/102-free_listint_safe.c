#include "lists.h"

/**
* free_listint_safe - frees a linkedList
* @h: the pointer to a pointer of head
* Return: the size of the list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t **arr;
	unsigned int i = 0;
	unsigned int flag = 0;

	arr = malloc(sizeof(listint_t *) * 1024);
	if (!arr)
		exit(98);
	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == arr[i])
			{
				flag = 1;
				break;
			}
			else
				flag = 0;
		}
		if (flag == 1)
			break;
		arr[count] = *h;
		*h = (*h)->next;
		count++;
	}
	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	*h = NULL;
	return (count);
}

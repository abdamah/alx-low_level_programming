#include "lists.h"

/**
* print_listint_safe - prints a element of the list safely.
* @head: the head node. pointer
*
* Return: the count number
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t index = 0;
	unsigned int i = 0;
	unsigned int flag = 0;
	listint_t const **array;

	array = malloc(sizeof(listint_t *) * 1024);
	if (!array)
		exit(98);
	while (head)
	{
		for (i = 0; i < count; i++)
		{
			if (head == array[i])
			{
				flag = 1;
				index = i;
				break;
			}
			else
				flag = 0;
		}
		if (flag == 1)
			break;
		array[count] = head;
		head = head->next;
		count++;
	}
	i = 0;
	while (i < count)
	{
		printf("[%p] %d\n", (void *)array[i], array[i]->n);
		i++;
	}
	if (flag == 1)
	{
		printf("-> [%p] %d\n", (void *)array[index], array[index]->n);
	}
	free(array);
	return (count);
}

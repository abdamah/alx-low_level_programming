#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the currentt at given index in the
 * linkedList.
 * @head: double pointer to the head of the list
 * @index: index of the current to be deleted
 * Return: 1 if success and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int idx = 0;

	while (*head)
	{
		if (idx == index)
		{
			current = (*head);
			(*head) = (*head)->next;
			free(current);
			return (1);
		}

		head = &(*head)->next;
		idx++;
	}

	return (-1);
}

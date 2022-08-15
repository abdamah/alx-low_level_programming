#include "lists.h"
/**
 * get_nodeint_at_index - returns the current node of the linkedList
 * @head: a pointer to the head of the listint_t list
 * @index: the index of the node starting at 0
 * Return: the current node of listint_t or NULL if fails.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}

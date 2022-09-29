#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index od a dLL
 * @head: double pointer to the head of the list
 * @index: the node that should be delete
 * Return: return 1 for success, -1 for faail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		index--;
	}
	if (current == *head)
	{
		*head = current->next;
		(*head)->prev = NULL;
	}
	else
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
	}
	free(current);
	return (1);
}

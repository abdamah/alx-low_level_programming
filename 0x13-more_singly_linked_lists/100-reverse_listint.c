#include "lists.h"
/**
 * reverse_listint - reverses a linkedList
 * @head: double pointer to head
 * Return: a pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	if (!head)
		return (NULL);
	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = current;
	}
	(*head) = prev;

	return (*head);
}

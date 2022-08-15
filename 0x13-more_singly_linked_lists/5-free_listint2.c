#include "lists.h"
/**
 * free_listint2 - frees linkedList
 * @head: double pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL)
		return;

	while (current)
	{
		current = current->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}

#include "lists.h"
/**
 * free_listint2 - frees listint_t
 * @head: double pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head)
	{
		current = *head;
		while (current)
		{
			current = current->next;
			free(*head);
			*head = current;
		}
		*head = NULL;
	}
}

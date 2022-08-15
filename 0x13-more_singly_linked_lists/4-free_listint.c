#include "lists.h"

/**
*free_listint - frees a linkedList
*@head: head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

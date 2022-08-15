#include "lists.h"
/**
 * pop_listint - deletes the head node of the linkedList
 * @head: double pointer to the head of the list
 *
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *current;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	current = (*head)->next;

	free(*head);
	*head = current;

	return (data);
}

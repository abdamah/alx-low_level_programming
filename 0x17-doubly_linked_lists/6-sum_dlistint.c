#include "lists.h"
/**
 * sum_dlistint - show us the sum of all the data (n) in a dLL
 * @head: a pointer to the head of the dLL
 * Return: if empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int add_data = 0;

	while (head != NULL)
	{
		add_data += head->n;
		head = head->next;
	}
	return (add_data);
}

#include "lists.h"
/**
 * sum_listint - sum all the data (n) of listint_t linkedList.
 * @head: a pointer to the head of the list
 * Return: sum of all the data in the Linkedlist or 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum_list(head, &sum);
		return (sum);
	}

	return (0);
}
/**
 * sum_list - find the sum of ndoes
 * @head: a pointer to the head of the lintint_t list
 * @sum: integer that sums
 * Description: function to recursively find the sum of nodes
 * of the given linked list
 * Return: the sum
 */
void sum_list(listint_t *head, int *sum)
{
	int data;

	if (!head)
		return;

	data = head->n;
	sum_list(head->next, sum);

	*sum = *sum + data;
}

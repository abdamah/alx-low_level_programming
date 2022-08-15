#include "lists.h"

/**
* find_listint_loop - finds where the loop in a linked list is
* @head: the head node
* Return: The address of the node where loop starts or null if none
*/

listint_t *find_listint_loop(listint_t *head)
{
	while (is_valid(head))
	{
		if (is_valid(head) == head)
			return (head);
		head = head->next;
	}
	return (NULL);
}
/**
* is_valid - helper function taht checks if stuff matches and if we in a loop
* @head: the head node
*
* Return: The address of the node where the loop starts, or NULL if no loop
*/

listint_t *is_valid(listint_t *head)
{
	listint_t *current = NULL;
	listint_t *leading = NULL;

	current = leading = head;
	while (current)
	{
		current = current->next;
		leading = leading->next;
		if (leading && leading->next)
			leading = leading->next;
		else
			return (NULL);
		if (current == leading)
			return (leading);
	}
	return (NULL);
}

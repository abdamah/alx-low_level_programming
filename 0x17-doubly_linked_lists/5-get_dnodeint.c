#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: return nth node or NULL if not exists.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node;
	unsigned int i;

	curr_node = head;
	i = 0;
	while (curr_node != NULL)
	{
		if (i == index)
			return (curr_node);
		curr_node = curr_node->next;
		i++;
	}
	return (NULL);
}

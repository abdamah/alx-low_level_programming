#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a double pointer to the head of the DLL
 * @idx: index of the list where the new node should be added
 * @n: the content of the new node to be added
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *curr_node;

	curr_node = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx > 1)
	{
		curr_node = curr_node->next;
		if (curr_node == NULL)
			return (NULL);
		idx--;
	}
	if (curr_node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = curr_node;
	new_node->next = curr_node->next;
	curr_node->next->prev = new_node;
	curr_node->next = new_node;
	return (new_node);
}

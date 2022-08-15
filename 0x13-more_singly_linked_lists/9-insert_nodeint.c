#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: double pointer to the head of the linkedList
 * @idx: is the index of the list where the new node should be added
 * @n: is the data
 * Return: A address of the new node or NULL if fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current != NULL && count != idx - 1)
	{
		count++;
		current = current->next;
	}

	if (count == idx - 1 && current != NULL)
	{
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}

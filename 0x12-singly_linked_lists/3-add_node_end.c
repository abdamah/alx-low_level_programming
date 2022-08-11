#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a poitner to the new node or NULL if fials
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *new_end_node;
	list_t *firstnode;

	new_end_node = malloc(sizeof(list_t));

	if (new_end_node)
	{
		new_end_node->str = strdup(str);

		if (new_end_node->str || !str)
		{
			while (new_end_node->str[count])
				count++;

			new_end_node->next = NULL;
			new_end_node->len = count;

			if (!*head)
			{
				*head = new_end_node;
				return (new_end_node);
			}

			/*Assign first node to head*/
			firstnode = *head;

			while (firstnode->next)
				firstnode = firstnode->next;

			firstnode->next = new_end_node;
			return (new_end_node);
		}

		free(new_end_node);
			return (NULL);

	}

	return (NULL);
}

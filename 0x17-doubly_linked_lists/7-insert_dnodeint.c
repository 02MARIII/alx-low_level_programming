#include "lists.h"

/**
 * find_dlistint_at_index - Entry point
 * @h: pointer param for dlinstint_t
 * @index: unsigned param for int
 * Return: dlistint_t
 */
dlistint_t *find_dlistint_at_index(dlistint_t *h, unsigned int index)
{
	unsigned int i;

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	for (i = 0; i < index && h != NULL; i++)
		h = h->next;

	return (h);
}
/**
 * insert_node_at_index - Entry point
 * @h: double pointer param for dlistint_t
 * @idx: unsigned param for int
 * @n: param for int
 * Return: dlistint_t
 */
dlistint_t *insert_node_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}
	current = find_dlistint_at_index(current, idx - 1);
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (current->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = current;
		current->next = new_node;
	}
	else
	{
		new_node->next = current->next;
		new_node->prev = current;
		current->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}

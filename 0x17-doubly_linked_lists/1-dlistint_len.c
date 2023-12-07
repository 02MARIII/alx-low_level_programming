#include "lists.h"

/**
 * dlistint_len - Entry point
 * @h: const pointer param for dlistint_t
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	int initial_print = 0;

	while (h != NULL)
	{
		if (h->prev != NULL && initial_print == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			initial_print = 1;
			node_count = 0;
		}
		h = h->next;
		node_count++;
	}

	return (node_count);
}

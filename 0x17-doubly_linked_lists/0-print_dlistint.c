#include "lists.h"

/**
 * print_dlistint - Entry point
 * @h: const pointer for param dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%i\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}

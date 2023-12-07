#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 * @head: pointer param for dlistint_t
 * @index: unsigned param for int
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;

		for (i = 0; i < index && current != NULL; i++)
			current = current->next;

		return (current);
	}
	else
	{
		return (NULL);
	}
}

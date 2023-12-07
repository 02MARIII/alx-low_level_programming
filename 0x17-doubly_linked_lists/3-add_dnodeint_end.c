#include "lists.h"

/**
 * add_dnodeint_end - Entry point
 * @head: double pointer param for dlistint_t
 * @n: const param for int
 * Return: dlistint_t.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tail;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;

		new_node->next = NULL;
		new_node->prev = tail;
		tail->next = new_node;
	}

	return (new_node);
}

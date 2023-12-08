#include "lists.h"

/**
 * find_dlistint_at_index - Entry point
 * @head: pointer param for dlistint_t
 * @index: unsigned param for int
 * Return: dlistint_t
 */
dlistint_t *find_dlistint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	while (head != NULL && head->prev != NULL)
		head = head->prev;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
/**
 * delete_dnodeint_at_index - Entry point
 * @head: double pointer param for dlistint_t
 * @index: ungsined param for int
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *previous;

	while (current != NULL && current->prev != NULL)
	{
		current = current->prev;
		*head = (*head)->prev;
	}
	if (current != NULL && index != 0)
	{
		current = find_dlistint_at_index(current, index);
		if (current != NULL)
		{
			previous = current->prev;

			if (previous != NULL)
				previous->next = current->next;

			if (current->next != NULL)
				current->next->prev = previous;
			free(current);
			return (1);
		}
		return (-1);
	}
	if (current != NULL && index == 0)
	{
		previous = current->next;
		if (previous == NULL)
			*head = NULL;
		else
		{
			previous->prev = NULL;
			free(current);
			*head = previous;
		}
		return (1);
	}
	return (-1);
}

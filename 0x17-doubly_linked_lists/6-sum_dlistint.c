#include "lists.h"
/**
 * sum_dlistint - Entry point
 * @head: pointer param for dlistint_t
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;

		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
		return sum;
	}
	else
	{
		return 0;
	}
}

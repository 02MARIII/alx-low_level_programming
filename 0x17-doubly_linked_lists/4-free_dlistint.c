#include "lists.h"

/**
 * free_dlistint - Entry point
 * @head: pointer param for dlinstint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}

#include "lists.h"
/**
 * pop_listint - Entry point
 * @head: double pointer param for listint_t
 * Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		return (0);
	}
	else
	{
		temp = (*head);
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return ((*head)->n);
}

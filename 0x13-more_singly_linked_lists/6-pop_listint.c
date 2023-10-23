#include "lists.h"
/**
 * pop_listint - Entry point
 * @head: double pointer param for listint_t
 * Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x = 0;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = (*head)->next;
		x = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (x);
}

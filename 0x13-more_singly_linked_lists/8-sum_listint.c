#include "lists.h"
/**
 * sum_listint - Entry point
 * @head: pointer param for listint_t
 * Return: int
*/
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *tmp = head;
	if (!head)
		return (0);
	while (tmp)
	{
		x += tmp->n;
		tmp = tmp->next;
	}
	return (x);
}
#include "lists.h"
/**
 * delete_nodeint_at_index - Entry point
 * @head: double pointer param for listint_t
 * @index: unsigned param for int
 * Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *tmp = *head;
	unsigned int x;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	x = 0;
	while (x < index)
	{
		if (tmp == NULL)
			return (-1);
		prev = tmp;
		tmp = tmp->next;
		x++;
	}
	if (prev != NULL)
		prev->next = tmp->next;
	free(tmp);
	return (1);
}
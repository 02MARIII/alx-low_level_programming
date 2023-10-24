#include "lists.h"
/**
 * get_nodeint_at_index - Entry point
 * @head: param for listint_t
 * @index: unsigned param for int
 * Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp = head;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}
	if (tmp)
		return (tmp);
	else
		return (NULL);
}

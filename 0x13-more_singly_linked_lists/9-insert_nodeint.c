#include "lists.h"
/**
 * insert_nodeint_at_index - Entry point
 * @head: double pointer for listint_t
 * @idx: unsigned param for int
 * @n: param for int
 * Return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *tmp = *head;
	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	if (!head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	i = 0;
	while (tmp && i < idx)
	{
		idx--;
		if (i == idx)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		else
			tmp = tmp->next;
		i++;
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	return (NULL);
}
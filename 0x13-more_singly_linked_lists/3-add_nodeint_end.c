#include "lists.h"
/**
 * add_nodeint_end - Entry point
 * @head: double pointer for listint_t
 * @n: const param for int
 * Return: listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!head || !newNode)
		return (NULL);
	if (n)
	{
		newNode->n = n;
		if (!newNode->n)
		{
			free(newNode);
			return (NULL);
		}
	}
	if (node != NULL)
	{
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	else
		*head = newNode;
	return (newNode);
}

#include "lists.h"
/**
 * add_nodeint - Entry point
 * @head: double pointer param for listint_t
 * @n: const param for int
 * Return: listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *rew_list;

	rew_list = malloc(sizeof(listint_t));
	if (rew_list == NULL)
		return (NULL);
	rew_list->n = n;
	rew_list->next = *head;
	*head = rew_list;
	return (*head);
}

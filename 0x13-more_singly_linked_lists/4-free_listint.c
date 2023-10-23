#include "lists.h"
/**
 * free_listint - Entry point
 * @head: param for listint_t
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

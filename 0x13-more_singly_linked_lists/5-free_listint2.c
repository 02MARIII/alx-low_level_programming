#include "lists.h"
/**
 * free_listint - Entry point
 * @head: param for listint_t
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
			free(temp);
		}
		*head = NULL;
	}
}

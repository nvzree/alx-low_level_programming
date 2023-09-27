#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
		return;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}

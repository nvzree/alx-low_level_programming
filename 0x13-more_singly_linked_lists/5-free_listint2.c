#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}

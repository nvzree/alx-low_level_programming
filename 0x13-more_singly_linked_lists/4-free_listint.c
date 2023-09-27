#include "lists.h"

/**
 * free_listint - frees a listnt_t list
 * @head: pointer to struct
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (head == NULL)
		return;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}

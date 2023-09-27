#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to listint_t
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	n = temp->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(temp);

	return (n);
}

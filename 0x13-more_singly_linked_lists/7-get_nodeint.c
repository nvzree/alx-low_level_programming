#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t linked list
 * @head: pointer to listint_t
 * @index: index of node to return
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	current = head;

	for (i = 0; i < index && head != NULL; i++)
	{
		current = current->next;
	}

	if (i == index)
		return (current);

	return (NULL);
}

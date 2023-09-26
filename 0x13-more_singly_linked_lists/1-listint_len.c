#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to struct
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_count = 0;

	while (h != NULL)
	{
		num_count++;
		h = h->next;
	}
	return (num_count);
}

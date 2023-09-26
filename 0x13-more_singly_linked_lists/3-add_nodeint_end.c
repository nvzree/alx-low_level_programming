#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a listint_t list
 * @head: pointer to struct
 * @n: int data for new node
 * Return: address of new node of NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* if linked list is empty, make the new node as the head and retrun*/
	if (*head == NULL)
		*head = new_node;
	else /* Else traverse till the last node*/
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		/*change the next pointer of the last node to point to the new node*/
		tmp->next = new_node;
	}

	return (new_node);
}

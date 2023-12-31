#include "lists.h"

/**
 * _strlen - calculates the length of string
 * @str: string
 * Return: length of string
 */

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{

	}
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to first node
 * @str: data for new node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL) /* validate input*/
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new = malloc(sizeof(list_t)); /*malloc for new node*/
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	*head = new; /* set head to point to new node*/

	return (new);
}

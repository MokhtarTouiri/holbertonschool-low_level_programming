#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a n node
 * @head: head of the linked
 * @str: string to store
 * Return: address to head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; new->str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}

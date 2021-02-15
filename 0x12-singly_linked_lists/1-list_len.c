#include <stdio.h>
#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t
 * @h: Header pointeur
 * Return: Number
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)

	{
		i++;
		h = h->next;
	}
	return (i);
}

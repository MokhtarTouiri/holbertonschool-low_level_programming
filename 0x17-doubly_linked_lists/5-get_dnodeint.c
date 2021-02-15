#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* get_dnodeint_at_index - get node at index
* @head: pointer list
* @index: int
* Return: list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
if (head == NULL)
return (NULL);
while (head->prev != NULL)
head = head->prev;
i = 0;
while (head != NULL)
{
if (i == index)
break;
head = head->next;
i++;
}
return (head);
}

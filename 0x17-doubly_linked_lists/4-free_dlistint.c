#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_dlistint - free list
* @head: pointer list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while ((tmp = head) != NULL)
{
head = head->next;
free(tmp);
}
}

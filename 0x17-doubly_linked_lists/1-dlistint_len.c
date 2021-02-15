#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* dlistint_len - returns len list
* @h: pointer dlist
* Return: int
*/
size_t dlistint_len(const dlistint_t *h)
{
int x;
x = 0;
if (h == NULL)
return (x);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
x++;
h = h->next;
}
return (x);
}

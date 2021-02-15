#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* print_dlistint - print list
* @h: dlistint
* Return: int
*/
size_t print_dlistint(const dlistint_t *h)
{
int x;
x = 0;
if (h == NULL)
return (x);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
printf("%d\n", h->n);
x++;
h = h->next;
}
return (x);
}

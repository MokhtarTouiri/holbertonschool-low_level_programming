#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* sum_dlistint - sum of list
* @head: pointer list
* Return: int
*/
int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;
if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}

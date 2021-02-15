#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of size
 * @size: the size of the memory to print
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;
p = malloc(nmemb * size);
if (nmemb == 0 || size == 0)
return (NULL);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}

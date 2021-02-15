#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number of bytes to locate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (!p)
exit(98);
return (p);
}

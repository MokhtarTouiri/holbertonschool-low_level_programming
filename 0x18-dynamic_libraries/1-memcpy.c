#include "holberton.h"
#include <stdio.h>
/**
 * *_memcpy - prints buffer in hexa
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(dest + i) = src[i];
return (dest);
}


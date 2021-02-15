#include "holberton.h"

/**
 * _strcpy - copies string
 * @src: pointer to string
 * @dest: pointer to copied string
 * Return: pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = src[i];
return (dest);
}

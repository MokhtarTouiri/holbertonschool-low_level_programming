#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
unsigned int i, j;
char *str_copy;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
;
i++;
str_copy = malloc(i *sizeof(char));
if (str_copy == NULL)
return (NULL);
for (j = 0; j < i; j++)
str_copy[j] = str[j];
return (str_copy);
}

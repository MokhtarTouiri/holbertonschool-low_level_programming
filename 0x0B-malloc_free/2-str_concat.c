#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k, l;
char *s1_s2;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
;
}
k = i + j + 1;
s1_s2 = malloc(k *sizeof(char));
if (s1_s2 == NULL)
return (NULL);
for (l = 0; l < i; l++)
s1_s2[l] = s1[l];
for (l = 0; l < j; l++)
s1_s2[l + i] = s2[l];
s1_s2[i + j] = '\0';
return (s1_s2);
}

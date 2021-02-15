#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, l = 0;
char *s1_s2;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
;
for (j = 0; s2[j]; j++)
;

if (n >= j)
n = j;
s1_s2 = malloc((n + i + 1) * sizeof(char));
if (s1_s2 == NULL)
return (NULL);
for (; l < i; l++)
{
s1_s2[l] = *s1;
s1++;
}
for (l = 0; l < n; l++)
{
s1_s2[l + i] = *s2;
s2++;
}
s1_s2[n + i] = '\0';
return (s1_s2);
}

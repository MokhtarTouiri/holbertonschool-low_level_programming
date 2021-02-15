#include "holberton.h"
/**
*_strcmp - concatenate
*@s1: string
*@s2: string
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
int i;
int comp;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
comp = s1[i] - s2[i];
s1[i + 1] = '\0';
}
else
comp = 0;
}
return (comp);
}

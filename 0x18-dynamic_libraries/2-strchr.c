#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - check 
 * @s: char
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (*(s + i))
{
if (*(s + i) == c)
return (s + i);
i++;
}
if (*(s + i) == c)
return (s + i);
return (0);
}


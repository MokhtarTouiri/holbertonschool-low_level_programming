#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check 
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}


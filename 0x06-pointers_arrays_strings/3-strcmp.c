#include "holberton.h"

/**
 * _strcmp - compares
 * @s1: one
 * @s2: two
 * Return: s1 & s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (s1[i] - s2[i]);
}

#include "holberton.h"

/**
 * leet - encodes 1337
 * @s: string
 * Return: address s
 */
char *leet(char *s)
{
	int i, v;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (v = 0; v <= 9; v++)
		{
			if (c[v] == *(s + i))
				*(s + i) = d[v];
		}
	}
	return (s);
}

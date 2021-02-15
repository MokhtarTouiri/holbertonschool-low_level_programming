#include "holberton.h"

/**
 * cap_string - capitalizes
 * @s: string to
 * Return: address s
 */
char *cap_string(char *s)
{
	int i = 0, v;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (v = 0; v <= 12; v++)
				{
					if (a[v] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}

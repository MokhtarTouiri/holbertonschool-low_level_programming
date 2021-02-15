#include "holberton.h"

/**
 *_strncpy - copie a strings
 * @dest: string to src
 * @src: string to dest
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && *(src + a))
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

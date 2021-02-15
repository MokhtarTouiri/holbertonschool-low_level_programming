#include "holberton.h"

/**
 *_strncat - concatenates two strings
 * @dest: string to src
 * @src: string to dest
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while (b < n && *(src + b))
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	if (b < n)
		dest[a] = src[b];
	return (dest);
}

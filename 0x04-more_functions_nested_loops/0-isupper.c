#include "holberton.h"
/**
 *_isupper - checks for uppercase character
 *Return: 0
 *@c: integer
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

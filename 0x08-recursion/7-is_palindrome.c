#include "holberton.h"

/**
 * _strlen - return length
 * @str: string
 * Return: length of str
 */
int _strlen(char *str)
{
if (!*str)
return (0);
else
return (1 + _strlen(str + 1));
}

/**
 * _palindrome - checkes palindrome
 * @i: index
 * @l: string length
 * @p: String to check
 * Return: 1 if palindrome 0 if not
 */
int _palindrome(int l, int i, char *p)
{
if (i > l / 2)
return (1);
else if (p[i] != p[l - i - 1])
return (0);
else
return (_palindrome(l, i + 1, p));
}

/**
 * is_palindrome - string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int l;

l = _strlen(s);
return (_palindrome(l, 0, s));
}

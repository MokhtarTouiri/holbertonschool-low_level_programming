#include "holberton.h"

/**
 * swap_int - swaps the value
 * @a: value of first swap
 * @b: value of second swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a -= *b;
}

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - each element of array
 * @array: array
 * @size: size to the array
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

	size_t i = 0;

	if (array && action && size)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

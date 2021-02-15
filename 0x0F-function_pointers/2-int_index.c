#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * int_index - searches for an integer
  * @array: pointer
  * @size: size of pointer
  * @cmp: function
  * Return: 0 Or -1
  */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	i = 0;

	{
		if (array && size && cmp)
			while (i < size)

			{
				if (cmp(array[i]))
					return (i);
				i++;

			}
		return (-1);
	}
}

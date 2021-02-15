#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array of integers
 * @size: is the number of elements in array
 * @array: is a pointer to the first element of the array to search
 * @value: is the value to search for Your function
 * Return: return
 */

int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (!array || size <= 0)
return (-1);
while (i < size)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}

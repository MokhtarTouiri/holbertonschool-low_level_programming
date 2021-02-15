#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * @size: is the number of elements in array
 * @array:  is a pointer to the first element of the array
 * @value: is the value to search for Your function
 * Return: return
 */

int binary_search(int *array, size_t size, int value)
{
size_t i = 0;
int *tmp = array;
if (array == NULL || size <= 0)
return (-1);
while (size)
{
for (i = 0, printf("Searching in array: "); i < size; i++)
printf("%d%s", tmp[i], i + 1 == size ? "\n" : ", ");
i = (size - 1) / 2;
if (tmp[i] == value)
return ((tmp - array) + i);
else if (tmp[i] > value)
size = i;
else
{
tmp += (i + 1);
size -= (i + 1);
}
}
return (-1);
}

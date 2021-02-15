#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* hash_table_create - check the code for Holberton School students.
* @size: unigned
* Return: Always EXIT_SUCCESS.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *t;
t = malloc(sizeof(hash_table_t));
if (!t)
return (NULL);
t->size = size;
t->array = calloc(size, sizeof(hash_node_t *));
if (!t->array)
return (NULL);
return (t);
}

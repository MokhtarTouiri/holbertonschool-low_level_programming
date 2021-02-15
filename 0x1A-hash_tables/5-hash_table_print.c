#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table.
 * @ht: is the hash table
 * Return: index at which the key/value
 */

void hash_table_print(const hash_table_t *ht)
{
int t = 0;
unsigned int index;
if (ht == NULL)
return;
printf("{");
for (index = 0; index <= ht->size; index++)
{
if (ht->array[index])
while (ht->array[index])
{
if (t != 0)
printf(", ");
printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
t = 1;
ht->array[index] = ht->array[index]->next;
}
}
printf("}\n");
}

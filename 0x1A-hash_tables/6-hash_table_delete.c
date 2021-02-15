#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_delete - function that deletes a hash table.
* @ht: is the hash table
* Return: index at which the key/value
*/

void hash_table_delete(hash_table_t *ht)

{
unsigned int index;
hash_node_t *t;
if (ht == NULL)
return;
for (index = 0; index <= ht->size; index++)
{
if (ht->array[index])
{
while (ht->array[index])
{
t = ht->array[index]->next;
free(ht->array[index]->value);
free(ht->array[index]->key);
free(ht->array[index]);
ht->array[index] = t;
}
}
}
free(ht->array);
free(ht);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table.
* @key: is the key
* @ht: is the hash table you want to add or update the key/value to
* @value : is the value associated with the key.
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *n, *t;
unsigned long int i;
if (key == NULL || value == NULL || ht == NULL)
return (0);
i = key_index((const unsigned char *)key, ht->size);
for (t = ht->array[i]; t; t = t->next)
{
if (t && strcmp(t->key, key) == 0)
{
free(t->value);
t->value = strdup(value);
if (t->value == NULL)
return (0);
return (1);
}
t = t->next;
}
n = malloc(sizeof(hash_node_t));
if (!n)
return (0);
n->key = strdup(key);
if (n->key == NULL)
{
free(n->key);
return (0);
}
n->value = strdup(value);
if (n->value == NULL)
{
free(n->value);
return (0);
}
n->next = ht->array[i];
ht->array[i] = n;
return (1);
return (0);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key.
* @key: is the key you are looking for
* @ht: is the hash table you want to look into
* Return: the value associated with the element
*/

char *hash_table_get(const hash_table_t *ht, const char *key)

{
hash_node_t *t;
unsigned long int i;
 if (ht == NULL || key == NULL)
return (NULL);
i = key_index((const unsigned char *)key, ht->size);
t = ht->array[i];
while (t)
{
if (strcmp(t->key, key) == 0)
return (t->value);
t = t->next;
}
return (NULL);
}

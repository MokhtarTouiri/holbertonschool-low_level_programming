#ifndef _structur_dog_
#define _structur_dog_

/**
 * struct dog - Data Structures
 * @name: char
 * @age: float
 * @owner: char
 */

struct dog
{
char *name;
float age;
char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

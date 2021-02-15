#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *init_dog - init the struct dog
  *@d: pointer
  *@name: char
  *@age: double
  *@owner: char
  *return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

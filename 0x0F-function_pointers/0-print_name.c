#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: pointeur of name
 * @f: pointeur function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))

{
	if ((*name) != NULL && (*f) != NULL)
		f(name);
}

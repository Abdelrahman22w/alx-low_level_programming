#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function to print a name
 * @name: name that will be printed
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}

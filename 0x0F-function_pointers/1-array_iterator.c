#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print an integer of iteration
 * @size: size of the array
 * @array: pointer to int
 * @action: pointer to an function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		actoin(array[i]);
	}
}

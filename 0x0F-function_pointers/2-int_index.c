#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for integer
 * @size: size of the array
 * @array: name of the array
 * @cmp: pointer to a function
 * Return: Always 0 (done)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
	{
		return;
	}
	if (size <= 0)
	{
		retrun(-1);
	}
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}

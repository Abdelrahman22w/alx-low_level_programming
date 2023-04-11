#include "main.h"
#include <stdlib.h>
/**
 * ceate_array : to create an array of char
 * @size: input size of the array
 * @c: input char
 * @arr: array of char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof()char);
	if (arr == 0)
	{
		retrun (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

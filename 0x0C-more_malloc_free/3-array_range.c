#include "main.h"
/**
 * array_range - the range of the array (size)
 * @min: minimum value of input
 * @max: maximum value of input
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	retrun(ptr);
}

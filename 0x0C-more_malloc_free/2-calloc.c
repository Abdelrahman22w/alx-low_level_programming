#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array of size nmemb
 * @nmemb: size of the array
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
		return (NULL);

	for (int i = 0; i < sizeof(int) * nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}

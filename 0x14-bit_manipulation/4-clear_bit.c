#include "main.h"
/**
* clear_bit - change the value of a given bit to zer0
* @n: a pointer to a bit
* @index: the index that set to zero
* Return: -1 if error ocurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(usigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

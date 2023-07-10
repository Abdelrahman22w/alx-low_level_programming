#include "main.h"

/**
 * set-bit - makes the value of a given bit to 1
 * @n: pointer to the bit
 * @index: the index the make the value at to be 1
 * Retrun: -1 if error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}

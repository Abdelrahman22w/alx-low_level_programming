#include "main.h"
/**
 * get_bit - a function to get value of bits
 * @n: number of the bits
 * @index: index number of the bit
 * Return: -1 if and error ocuured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

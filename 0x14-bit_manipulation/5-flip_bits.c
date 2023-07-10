#include "main.h"
/**
 * flip_bits - calculate the number of bits needed to be filpped to get another number
 * @n: the number
 * @m: the number of bits to be flipped
 * Return: number of bits needed to be flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	usigned long int num = n ^ m;
	bits = 0;

	while (num > 0)
	{
		bits += (num & 1);
		num >>= 1;
	}

	return (bits);
}

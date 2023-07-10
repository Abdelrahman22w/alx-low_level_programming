#include "main.h"
/**
 * print_binary - Print the binary representation of a decimal number
 * @n: the number to be converted into binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1)

	_putchar((n & 1) + '0');
}

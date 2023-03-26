#include "main.h"

/**
 * print_numbers - print 0 - 9
 *		only using _putchar twice
 *
 * Return: Always 0 (Succes)
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	putchar('\n');
}

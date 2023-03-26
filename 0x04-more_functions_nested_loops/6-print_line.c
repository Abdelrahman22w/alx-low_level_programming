#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: the number of times the character _
 *		should be printed
*/

void print_line(int n)
{
	int i;

	if (n < 0)
	{
		putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		putchar('_');
	}

	putchar('\n');
	}
}

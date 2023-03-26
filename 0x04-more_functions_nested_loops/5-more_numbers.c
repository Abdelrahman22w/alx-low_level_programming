#include "main.h"

/**
 * more_numbers - print from 0 to 14 ten times
 *		using only putchar three times
 *
 *Return: Always 0 (success)
*/

void more_numbers(void)
{
	int num, row, i;

	for (row = 1; row <= 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}

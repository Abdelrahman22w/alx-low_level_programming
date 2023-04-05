#include "main.h"
/**
 * _pow_recursion - print the value of x to the power y
 * @x: input base
 * @y: input power
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}

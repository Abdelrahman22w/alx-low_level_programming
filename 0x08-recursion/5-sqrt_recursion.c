#include "main.h"
/**
 * sqrt_a - get the square root of a
 * @a: input
 * @b: input
 * Return: 0
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - print square root of a number
 * @n: input 
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

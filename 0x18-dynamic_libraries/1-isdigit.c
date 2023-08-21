#include "main.h"

/**
 * _isdigit - checks if input between 0 and 9
 *
 * @c:input
 *
 * Return: 1 if digit , 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

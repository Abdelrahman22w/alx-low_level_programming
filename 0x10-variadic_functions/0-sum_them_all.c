#include "variadic_functions.h"
/**
 * sum_them_all - a function to return the sum of the parameters
 * @n: the lenght of the argument
 * Retrun: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}

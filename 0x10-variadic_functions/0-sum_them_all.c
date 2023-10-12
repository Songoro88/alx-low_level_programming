#include "variadic_functions.h"
#include <stdarg.h>
/**
 * Sum_them_all - returns the sum of all paramters.
 * @n: The number of paramters passed to the Function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If x == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int x, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, x);

	for (j = 0; j < x; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}


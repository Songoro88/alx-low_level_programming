#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * Print_numbers - Numbers printed, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int x, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, x);

	for (index = 0; index < x; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (x - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\x");

	va_end(nums);
}

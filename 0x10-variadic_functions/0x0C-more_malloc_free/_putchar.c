#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes  Char c to stdout
 * @c: The Char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

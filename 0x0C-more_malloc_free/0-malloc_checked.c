#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Causes normal process termination of status value of 98
* @b: Number of Bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int a)
{
	void *ptr;

	ptr = malloc(a);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

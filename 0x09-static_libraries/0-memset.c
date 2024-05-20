#include "main.h"

/**
 * _memset - A constant byte fills memory
 * @s: starting address of memory to be filled
 * @b: the desired value :byte
 * @n: Number of Bytes to be changed
 *
 * Return: Changed array with new value for n Bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
	
}

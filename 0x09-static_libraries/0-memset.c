#include "main.h"

/**
 * _memset - Fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: Number of Bytes to be changed
 *
 * Return: Changed array with new value for n Bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}

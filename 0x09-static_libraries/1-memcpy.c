#include "main.h"

/**
 *_memcpy - Memory area copied by the function
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: Number of Bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}

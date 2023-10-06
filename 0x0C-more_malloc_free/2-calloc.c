#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size Bytes each and returns a pointer to the allocated memory.
*
* @nmemb: allocate memory for array
* @size: allocate element of size Bytes
*
* Return: pointer to the memory allocated .
*/
void * _calloc(unsigned int nmemb, unsigned int size)
{
   char *j;
   unsigned int k;


   if (nmemb == 0 || size == 0)
       return (NULL);
   j = malloc(nmemb * size);
   if (j == NULL)
       return (NULL);
   for (k = 0; k < (nmemb * size); k++)
       j[k] = 0;
   return (j);
}


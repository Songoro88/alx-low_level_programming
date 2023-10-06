#include "main.h"
#include <stdlib.h>

/**
* *array_range - creates array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored in addition to a number of elements
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
   int *ptr;
   int b, size;


   if (min > max)
       return (NULL);


   size = max - min + 1;


   ptr = malloc(sizeof(int) * size);


   if (ptr == NULL)
       return (NULL);


   for (b = 0; min <= max; b++)
       ptr[b] = min++;


   return (ptr);
}

#include "search_algos.h"

/**
  * linear_search - search for values in an array
  * @array: the array we want to search.
  * @size: size of the array
  * @value: the value to search for
  * Return: the index of the value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

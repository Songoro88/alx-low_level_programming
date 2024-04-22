#include "search_algos.h"

/**
* jump_search -	A function that searches for a value in
* an array of integers using the jump search algorithm
* @array: array of integers to search
* @size: size of array
* @value: value to search for
*
* Return: return the index of value, and if it doesn't exist return -1
*/
int jump_search(int *array, size_t size, int value)
{
	int prev = 0, step = 0, len = (int) size;

	if (!array || size <= 0)
		return (-1);

	while (step < len && prev < len)
	{
		if (array[step] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += (int) sqrt(len);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (prev < len && prev <= step)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}

#include "search_algos.h"
/**
 * linear_search - Linear search algorith in C an array of integers
 * @array: List of integers to search in
 * @size: The size of the integers provided
 * @value: The actual value to search for
 * Return: Value matched
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int idx;

	for (idx = 0; array && idx < size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}

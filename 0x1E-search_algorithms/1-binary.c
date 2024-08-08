#include "search_algos.h"
/**
 * binary_search - Searching integer in a sorted array of integers
 * using binary search algorithm
 * @array: The sorted list of integers
 * @size: The size of the list
 * @value: The actual value to look upon
 * Return: Index of particular value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, middle;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (middle = low; middle < high; middle++)
			printf("%d, ", array[middle]);
		printf("%d\n", array[middle]);
		middle = low + (high - low) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return (-1);
}

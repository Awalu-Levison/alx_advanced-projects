#include "search_algos.h"
/**
 * binary_search2 - Searching integer in a sorted array of integers
 * using binary search algorithm
 * @array: The sorted list of integers
 * @a: Left half
 * @b: Right half
 * @value: The actual value to look upon
 * Return: Index of particular value
 */
int binary_search2(int *array, size_t a, size_t b, int value)
{
	size_t idx;

	while (b >= a)
	{
		printf("Searching in array: ");
		for (idx = a; idx < b; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);
		idx = a + (b - a) / 2;
		if (array[idx] == value)
			return (idx);

		if (array[idx] > value)
			b = idx - 1;
		else
			a = idx + 1;
	}
	return (-1);
}

/**
 * exponential_search - Find a value in a sorted array of
 * integers using expenential search algorithm
 * @array: Sorted list of integers
 * @size: The length of the list (Number of values in the list)
 * @value: The actual value to be serached upon
 * in the sorted list of integers
 * Return: Index of a value in the list
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, high;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx = idx * 2)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}
	high = idx < size ? idx : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, high);
	return (binary_search2(array, idx / 2, high, value));
}

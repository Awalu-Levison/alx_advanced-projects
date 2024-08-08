#include "search_algos.h"
/**
 * advanced_binary_search_rec - Advanced binary search function
 * in recursion mode
 * @array: The sorted list of integers
 * @a: Left value
 * @b: Right value
 * @value: The actual value to search upon
 * Return: Index of the first value
 */
int advanced_binary_search_rec(int *array, size_t a, size_t b, int value)
{
	size_t idx;

	if (b < a)
		return (-1);

	printf("Searching in array: ");
	for (idx = a; idx < b; idx++)
		printf("%d, ", array[idx]);
	printf("%d\n", array[idx]);
	idx = a + (b - a) / 2;
	if (array[idx] == value && (idx == a || array[idx - 1] != value))
		return (idx);
	if (array[idx] >= value)
		return (advanced_binary_search_rec(array, a, idx, value));
	return (advanced_binary_search_rec(array, idx + 1, b, value));
}

#include "search_algos.h"
/**
 * advanced_binary - Advanced binary search function
 * @array: The sorted list of integers
 * @size: Number of elements present
 * @value: The actual value to search upon
 * Return: Index of the first value
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_search_rec(array, 0, size - 1, value));
}

#include "search_algos.h"
/**
 * interpolation_search - Search for value in a sorted array
 * using interpolation search algorithm
 * @array: The given list
 * @size: Size of the list
 * @value: The actual value being searched for
 * Description: Searching a value using interpolation search algorithm
 * Return: Index to the first value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, x, j;

	if (array == NULL)
		return (-1);

	for (x = 0, j = size - 1; j >= x;)
	{
		i = x + (((double)(j - x) / (array[j] - array[x])) * (value - array[x]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			j = i - 1;
		else
			x = i + 1;
	}
	return (-1);
}

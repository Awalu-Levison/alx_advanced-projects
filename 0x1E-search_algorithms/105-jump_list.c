#include "search_algos.h"
/**
 * jump_list - Jump search in a singly linked list using
 * skip list datastructure
 * @list: The pointer to the head node of the list
 * @size: Number of elements of the list
 * @value: The actual value to be searched upon
 * Return: Value at particular node pointer
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t s, step_size;
	listint_t *node, *limit;

	if (list == NULL || size == 0)
		return (NULL);

	s = 0;
	step_size = sqrt(size);
	for (node = limit = list; limit->index + 1 < size && limit->n < value;)
	{
		node = limit;
		for (s += step_size; limit->index < s; limit = limit->next)
		{
			if (limit->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", limit->index, limit->n);

	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, limit->index);
	for (; node->index < limit->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}

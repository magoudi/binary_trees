#include "binary_trees.h"

/**
 * array_to_heap - array to heap
 * @array: array
 * @size: size
 * Return: return
*/

heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *heap;

	if (!array || size == 0)
		return (NULL);
	heap = (heap_t *)binary_tree_node(NULL, array[0]);
	if (!heap)
		return (NULL);
	for (i = 1; i < size; i++)
	{
		heap_insert(&heap, array[i]);
	}
	return (heap);
}

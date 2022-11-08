#include "sort.h"

/**
 * swap_ints - Swap two integers in an array
 * @a: The first integer to swap
 * @b: the second integer to swapi
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - swap an array of integers in ascending order using the
 * selection sort algorithm
 * @array: the array of integers
 * @size: the size of the array
 *
 * Description: prints the array after each swap
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array + 1;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + 1) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}

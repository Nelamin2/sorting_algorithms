#include "sort.h"

void swap_quick(int *x, int *y);
int lomuto_partitioner(int *array, size_t size, int low, int high);
void lomuto_sorting_func(int *array, size_t size, int low, int high);

/**
 * swap_quick - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_quick( int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
/**
 * lomuto_partitioner - Order a subset of an array of integers according to
 * the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int *pivot, i, j;

	pivot = array + high;
	for (i = j = low; j < high; j++)
	{
		if (array[j] < *pivot)
		{
			if (i < j)
			{
				swap_quick(array + j, array + i);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] > *pivot)
	{
		swap_quick(array + i, pivot);
		print_array(array, size);
	}

	return (i);
}
/**
 * lomuto_sort-scheme - the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @low: The starting index of the array partition to order.
 * @high: The ending index of the array partition to order.
 *
 * Description: Uses the Lomuto partition scheme.
 */
void lomuto_sorting_scheme(int *array, size_t size, int low, int high)
{
size_t partition;
if (low < high)
{
partition = lomuto_partitioner(array, size, low, high);
lomuto_sorting_scheme(array, size, low, partition - 1);
lomuto_sorting_scheme(array, size, partition + 1, high);
}
}
/**
 * quick_sort - Sort an array of integers in ascending
 * order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
lomuto_sorting_scheme(array, size, 0, size - 1);
}

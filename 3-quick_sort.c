#include "sort.h"

void swap_quick(int *array, size_t size, int *x, int *y);
int lomuto_partitioner(int *array, size_t size, int low, int high);
void lomuto_sorting_func(int *array, size_t size, int low, int high);
void quick_sort(int *array, size_t size);

/**
 * swap_quick - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_quick(int *array, size_t size, int *x, int *y)
{
int temp;
{
temp = *x;
*x = *y;
*y = temp;
print_array((const int *)array, size);
}
}
/**
 * lomuto_partitioner - Order a subset of an array of integers according to
 *                    the lomuto partition scheme (last element as pivot).
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index of the subset to order.
 * @right: The ending index of the subset to order.
 * Return: The final partition index.
 */
int lomuto_partitioner(int *array, size_t size, int low, int high)
{
int pivot, i, j;
pivot = array[high];
for (i= j = low; low < high; low++)
if (array[j] < pivot)
if (j < i)
swap_quick(array, size, &array[j], &array[i++]);
swap_quick(array, size, &array[i], &array[high]);
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
int partition;
if (high > low)
{
partition = lomuto_partitioner(array, size, low, high);
lomuto_sorting_scheme(array, size, low, partition - 1);
lomuto_sorting_scheme(array, size, partition + 1, high);	}
}
/**
 * quick_sort - Sort an array of integers in ascending
 * order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Uses the Lomuto partition scheme. Prints
 * the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size == 1)
return;
lomuto_sorting_scheme(array, size, 0, size - 1);
}

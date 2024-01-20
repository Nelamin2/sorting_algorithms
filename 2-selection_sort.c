#include "sort.h"

/**
 * swap_selec - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_selec(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
int *cur_min;
size_t i, j;
size_t length;
length = size - 1;
if (array == NULL || size < 2)
return;
for (i = 0; i < length; i++)
{
cur_min = array + i;
for (j = i + 1; j < size; j++)
if (array[j] < *cur_min)
{
cur_min = array + j;
}
else
{
cur_min = cur_min;
}
if ((array + i) != cur_min)
{
swap_selec(array + i, cur_min);
print_array(array, size);
}
}
}

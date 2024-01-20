#include "sort.h"
/**
 * swap_func - Swap two integers in an array.
 * @first: The first integer to swap.
 * @second: The second integer to swap.
 */
void swap_func(int *first, int *second)
{
int temp;
temp = *first;
*first = *second;
*second = temp;
}
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: the array of integers to be sort.
 * @size: size of the array.
 */
void bubble_sort(int *array, size_t size)
{
bool swapped;
int i;
int j;
int length;
length = size - 1;
if (array == NULL || size == 1)
return;
do {
swapped = 0;
for (i = 0; i < length; i++)
{
j = i + 1;
if (array[i] > array[j])
{
swap_func(array + i, array + j);
print_array(array, size);
swapped = 1;
}
}
length--;
} while (swapped);
}

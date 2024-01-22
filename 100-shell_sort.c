#include "sort.h"

/**
 * max_gap - defines the maximum gap.
 * @size: The size of the array.
 * Return: The maximum gap.
 */
size_t max_gap(size_t size)
{
size_t n;
n = 1;
while (n < size)
n = n * 3 + 1;
return ((n - 1) / 3);
}
/**
 * shell_sort - Sort an array of integers in ascending
 * order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
size_t gap, i, j;
int temp;
if (array == NULL || size < 2)
return;
for (gap = max_gap(size); gap; gap = (gap - 1) / 3)
{
for (i = gap; i < size; i++)
{
temp = array[i];
for (j = i; j > gap - 1 && array[j - gap] > temp; j -= gap)
{
array[j] = array[j - gap];
}
array[j] = temp;
}
print_array(array, size);
}
}














































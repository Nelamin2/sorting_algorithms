#include "sort.h"

void merge_comp(int *array, size_t start, size_t stop, int *new);
void merge_sort_rec(int *array, size_t start, size_t stop, int *new);
/**
 * merge_comp - Sort a subarray of integers.
 * @array: A subarray of an array of integers to sort.
 * @new: A buffer to store the sorted subarray.
 * @start: The front index of the array.
 * @stop: The back index of the array.
 */
void merge_comp(int *array, size_t start, size_t stop, int *new)
{
size_t i, j, k, mid;
mid = (start + stop) / 2;
j = mid;
i = start;
printf("Merging...\n[left]: ");
print_array(array + start, mid - start);
printf("[right]: ");
print_array(array + mid, stop - mid);
for (k = start; k < stop; k++)
	if (i < mid && (j >= stop || (array[i] <= array[j])))
	{
		new[k] = array[i++];
        }
	else
        {
		new[k] = array[j++];
        }
printf("[Done]: ");
print_array(array + start, stop - start);

}
/**
 * merge_sort_rec - Implement the merge sort algorithm through recursion.
 * @new: A subarray of an array of integers to sort.
 * @array: A buffer to store the sorted result.
 * @start: The front index of the subarray.
 * @stop: The back index of the subarray.
 * Return: void
 */
void merge_sort_rec(int *array, size_t start, size_t stop, int *new)
{
size_t mid;
mid = (start + stop) / 2;
if (stop - start < 2)
{
return;
}
merge_sort_rec(new, start, mid, array);
merge_sort_rec(new, mid, stop, array);
merge_comp(array, start, stop, new);
}
/**
 * merge_sort  - Sort an array of integers in ascending
 * order using the merge sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Return: new
 **/
void merge_sort(int *array, size_t size)
{
int *new;
size_t i;
if (array == NULL || size < 2)
return;
new = malloc(sizeof(int) * size);
if (new == NULL)
return;
for (i = 0; i < size; i++)
new[i] = array[i];
merge_sort_rec(new, 0, size, array);
free(new);
}

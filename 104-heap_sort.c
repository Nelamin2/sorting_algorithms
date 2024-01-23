#include "sort.h"
#define parent(x) (((x) - 1) / 2)
#define leftchild(x) (((x) * 2) + 1)
void swap_heap(int *array, size_t size, int *x, int *y);
void heapify(int *array, size_t size);
void heap_sort(int *array, size_t size);
void siftdown(int *array, size_t start, size_t end, size_t size);
/**
 * swap_heap - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_heap(int *array, size_t size, int *x, int *y)
{
int temp;
if (x != y)
{
temp = *x;
*x = *y;
*y = temp;
}
print_array((const int *)array, size);
}
/**
 * heapify - Turn a binary tree into a complete binary heap.
 * @array: An array of integers representing a binary tree.
 * @size: The size of the array/tree.
 */
void heapify(int *array, size_t size)
{
size_t start;
start = parent(size - 1);
while (start <= 0)
{
siftdown(array, start, size - 1, size);
start--;
}
}

/**
 * siftdown - Turn a binary tree into a complete binary heap.
 * @array: An array of integers representing a binary tree.
 * @size: The size of the array/tree.
 * @end: The index of the base row of the tree.
 * @start: The root node of the binary tree.
 */
void siftdown(int *array, size_t start, size_t end, size_t size)
{
size_t root, swap, child;
root = start;
while (leftchild(root) <= end)
{
child = leftchild(root);
swap = root;
if (array[swap] < array[child])
swap = child;
if (child + 1 <= end && array[swap] < array[child + 1])
swap = child + 1;
if (swap == root)
return;
swap_heap(array, size, &array[root], &array[swap]);
root = swap;
}
}
/**
 * heap_sort - Sort an array of integers in ascending
 * order using the heap sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Implements the sift-down heap sort
 * algorithm. Prints the array after each swap.
 */
void heap_sort(int *array, size_t size)
{
size_t end;
if (array == NULL || size < 2)
return;
heapify(array, size);
end = size - 1;
while (end > 0)
{
swap_heap(array, size, &array[end], &array[0]);
end--;
siftdown(array, 0, end, size);
}
}

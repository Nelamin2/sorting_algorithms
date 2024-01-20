#include "sort.h"
/**
 * swap_insert - Swap two nodes in a listint_t doubly-linked list.
 * @x: A pointer to the first node to swap.
 * @y: The second node to swap.
 */
void swap_insert(listint_t *x, listint_t *y)
{
if (!x || !y)
return;
if (x->prev)
x->prev->next = y;
if (y->next)
y->next->prev = x;
x->next = y->next;
y->prev = x->prev;
x->prev = y;
y->next = x;
}
/**
 * insertion_sort_list - performs insertuin Sorts on a
 * doubly linked list of integers
 * @list: A pointer to the head of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *i, *k;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;
i = (*list)->next;
while (i)
{
k = i;
i = i->next;
while (k && k->prev)
{
if (k->prev->n > k->n)
{
swap_insert(k->prev, k);
if (!k->prev)
*list = k;
print_list((const listint_t *)*list);
}
else
k = k->prev;
}
}
}

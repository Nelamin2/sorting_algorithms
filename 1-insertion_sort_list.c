#include "sort.h"
/**
 * swap_insert - Swap two nodes in a listint_t doubly-linked list.
 * @x: A pointer to the first node to swap.
 * @y: The second node to swap.
 */
void swap_insert(listint_t *x, listint_t *y)
{
if (a->prev)
a->prev->next = b;
if (b->next)
{
b->next->prev = a;
a->next = b->next;
b->prev = a->prev;
a->prev = b;
b->next = a;
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
swap(j->prev, j);
*list = j;
print_list((const listint_t *)*list)
}
else
j = j->Prev;
}
}
}

#include "sort.h"
/**
 * insertion_sort_list - sort in list
 * @list: list to be inserted
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *at, *pre, *linked;

	if (!list)
		return;
	for (linked = *list; linked;)
	{
		at = linked;
		for (linked = linked->next; at && at->prev;)
		{
			pre = at->prev;
			if (at->n < at->prev->n)
			{
				if (pre->prev)
					pre->prev->next = at;
				if (at->next)
					at->next->prev = pre;
				pre->next = at->next, at->prev = pre->prev;
				at->next = pre, pre->prev = at;
				if (!at->prev)
					*list = at;
				print_list((const listint_t *) *list);
			}
			else
				at = at->prev;
		}
	}
}

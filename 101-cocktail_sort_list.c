#include "sort.h"
/**
 * swape - Swap
 * @linked: pointer to the head
 * @lino: First node to swap
 * @linen: Second node sto swap
 * Return: none
 */
void swape(listint_t **linked, listint_t *lino, listint_t *linen)
{
	if (lino->prev)
		lino->prev->next = linen;
	if (linen->next)
		linen->next->prev = lino;
	lino->next = linen->next, linen->prev = lino->prev;
	linen->next = lino, lino->prev = linen;
	if (!linen->prev)
		*linked = linen;
	print_list((const listint_t *) *linked);
}
/**
 * sort_list - Sorts
 * @list: list
 * Return: void
 */
void sort_list(listint_t **list)
{
	listint_t *prev, *next, *linked;
	int swap = 1;

	if (!list)
		return;
	for (linked = *list; swap != 0;)
	{
		swap = 0;
		for (; linked && linked->next;)
		{
			next = linked->next;
			if (linked->n > next->n)
			{
				swapitron(list, linked, next), swap = 1;
			}
			else
				linked = linked->next;
		}
		for (; linked && linked->prev && swap != 0;)
		{
			prev = linked->prev;
			if (prev->n > linked->n)
			{
				swape(list, prev, linked), swap = 1;
			}
			else
				linked = linked->prev;
		}
	}
}

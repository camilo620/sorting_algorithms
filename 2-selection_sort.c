#include "sort.h"
/**
 * selection_sort - selection sort algorithm
 * @r: array
 * @size: how big the array is
 * Return: void
 */
void selection_sort(int *r, size_t size)
{
	unsigned int i, j;
	int temp, mn;

	if (!r)
		return;
	for (i = 0; i < size; i++)
	{
		mn = i;
		for (j = i + 1; j < size; j++)
			if (r[mn] > r[j])
				mn = j;
		if (r[i] > r[mn])
			temp = r[i], r[i] = r[mn], r[mn] = temp, print_array(r, size);
	}
}

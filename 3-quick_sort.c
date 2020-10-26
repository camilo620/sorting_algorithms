#include "sort.h"

/**
 * quick1 - Not so fast fast boye
 * @r: Array
 * @size: Size
 * @low: Low limit
 * @high: High limit
 * Return: Proper index/Partition position
 */
int quick1(int *r, int size, int low, int high)
{
	int i, j, swap, swap2;

	for (swap2 = r[high], j = i = low; j < high; j++)
		if (r[j] < swap2)
		{
			if (r[i] != r[j])
				swap = r[i], r[i] = r[j], r[j] = swap, print_array(r, size);
			i++;
		}
	if (r[i] != r[high])
		swap = r[i], r[i] = r[high], r[high] = swap, print_array(r, size);
	return (i);
}
/**
 * quick2 - quicksort algorithm rythm
 * @r: Array
 * @size: Size
 * @low: Low limit
 * @high: High limit
 * Return: None
 */
void quick2(int *r, int size, int low, int high)
{
	int part;


	if (low < high)
	{
		part = quick1(r, size, low, high);
		quick2(r, size, low, part - 1);
		quick2(r, size, part + 1, high);
	}
}
/**
 * quick_sort - Quick sort algorithm
 * @array: Holds the array
 * @size: Size of the array
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		quick2(array, size, 0, size - 1);
}

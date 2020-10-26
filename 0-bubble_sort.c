#include "sort.h"

/**
 * bubble_sort - sort array
 * @array: array to be sort
 * @size: how big the array is
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	unsigned int i, j;

	if (!array)
		return;
	for (i = 0; i < size; i++)
		for (j = 0; j + 1 < size; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
}

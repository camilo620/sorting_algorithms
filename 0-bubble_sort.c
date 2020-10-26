#include "sort.h"

/**
 * bubble_sort - bubble sorts arrays
 * @array: HOlds the array
 * @size: Size of the array
 * Return: none
 */
void bubble_sort(int *array, size_t size)
{
	int tempi;
	unsigned int i, j;

	if (!array)
		return;
	for (i = 0; i < size; i++)
		for (j = 0; j + 1 < size; j++)
			if (array[j] > array[j + 1])
			{
				tempi = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempi;
				print_array(array, size);
			}
}

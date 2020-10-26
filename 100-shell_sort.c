#include "sort.h"
/**
 * shell_sort - Sort
 * @array: array
 * @size: array size
 * Return: none
 */
void shell_sort(int *array, size_t size)
{
	unsigned int in, i, j;
	int swap;

	if (!array)
		return;
	for (in = 1; in < size; in = in * 3 + 1)
		;
	for (in = (in - 1) / 3; in > 0; in = (in - 1) / 3)
	{
		for (i = in; i < size; i++)
		{
			swap = array[i];
			for (j = i; j > in - 1 && array[j - in] > swap; j -= in)
				array[j] = array[j - in];
			array[j] = swap;
		}
	print_array(array, size);
	}
}

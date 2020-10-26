#include "sort.h"
/**
 * counting_sort - Sort
 * @array: Array
 * @size: Size
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int siz, j, *cnt, *temp;
	unsigned int i;

	if (!array || size < 2)
		return;
	for (i = 0, siz = 0; i < size; i++)
		if (array[i] > siz)
			siz = array[i];
	cnt = malloc(sizeof(int) * (siz + 1));
	if (!cnt)
		return;
	temp = malloc(sizeof(int) * size);
	if (!temp)
	{
		free(cnt);
		return;
	}
	for (i = 0; i < size; i++)
		temp[i] = array[i];
	for (i = 0; i < size; i++)
		cnt[array[i]]++;
	for (i = 0, j = 1, siz += 1; j < siz; j++, i++)
		cnt[j] += cnt[i];
	print_array(cnt, siz);
	for (i = 0; i < size; i++)
		array[cnt[temp[i]] - 1] = temp[i];
	free(cnt), free(temp);
}

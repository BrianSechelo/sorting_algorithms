#include "sort.h"
/**
 * swap_values: fucntion that swaps elements
 * @a: first value
 * @b: second value
 */
void swap_values(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * shell_sort - sorts array of intergers using shellsort
 * @array: array of interges
 * @size: size of array
 *
 * Description: uses Knuth interval sequence
 */ 
void shell_sort(int *array, size_t size)
{
size_t gap, i, j;
if (array == NULL || size < 2)
	return;
for (gap = 1; gap < (size / 3);)
	gap = gap * 3 + 1;
for (; gap >= 1; gap /= 3)
{
	for (i = gap; i < size; i++)
	{	
		j = i;
		while (j >= gap && array[j - gap] > array[j])
		{
			swap_values(array + j, array + (j - gap));
			j -= gap;
		}

	}
	print_array(array, size);
}

}



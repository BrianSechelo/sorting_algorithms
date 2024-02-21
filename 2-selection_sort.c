#include "sort.h"

/**
 * swap_ele - swap two intergers in an array
 * @a: first interger
 * @b: second interger
 */
void swap_ele(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: input array
 * @size: size of array
 */ 
void selection_sort(int *array, size_t size)
{
 size_t i, j;
 if (array == NULL || size < 2)
 	return;
 for (i = 0; i < size - 1; i++)
 {
	 size_t min_idx = i;
	 for (j = i + 1; j < size; j++)
	 {
		 if (array[j] < array[min_idx])
			 min_idx = j;
	 }
	 if (min_idx != i)
	 {
	swap_ele(&array[i], &array[min_idx]);
	print_array(array, size);
	 }
}
}

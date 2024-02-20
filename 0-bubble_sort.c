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
 * bubble_sort - a function that sorts an array of integers in ascending order
 * @array: input array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool babble = false;
	if (array == NULL || size < 2)
		return;
	while(babble == false)
	{
		babble = true;
		for (i = 0; i < len - 1; i++)
		{
			if ( array[i] > array[i + 1])
			{	
				swap_ele( array + i, array + i + 1);
				print_array(array, size);
				babble = false;
			}
		
		}
		len--;
	}
}



#include "sort.h"

/**
 * swap - swap two integers
 * @a: first integer
 * @b: second integer
 */
 void swap(int *a, int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
 }
/**
 * partition - array partition using the Lomuto partition scheme
 * @array: array to be partitioned
 * @low: starting index 
 * @high: ending index
 * @size: size of the array
 *
 * return: index of the pivot element after partitioning 
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j;
for (j = low; j <= high - 1; j++)
{
	if (array[j] < pivot)
	{
		i++;
		if(i != j)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
}
if (array[high] < array[i + 1])
{
swap(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i + 1);
}
/** quicksort_recursive - recursively sorts an array of intergers
 * @array: input array
 * @low: starting index
 * @high: ending e=index
 * @size: size of array
 */
void quicksort_recursive(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pi = partition(array, low, high, size);
quicksort_recursive(array, low, pi - 1, size);
quicksort_recursive(array, pi + 1, high, size);
}
}
/**
 * quick_sort - a function that sorts an array of integers in ascending order using the Quick sort 
 * @array: input array of intergers
 * @size: size of intergers
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_recursive(array, 0, size - 1, size);


}

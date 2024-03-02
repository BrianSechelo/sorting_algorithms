#include "sort.h"

void merge_sort(int *array, size_t size);
void merge_sort_recursion(int *array, size_t l, size_t r);
void merge_sorted_arrays(int *array, size_t l, size_t m, size_t r);

void merge_sort(int *array, size_t size)
{
	    merge_sort_recursion(array, 0, size - 1);
}

void merge_sort_recursion(int *array, size_t l, size_t r)
{
if (l < r)
{
	size_t m = l + (r - l) / 2;
	merge_sort_recursion(array, l, m);
	merge_sort_recursion(array, m + 1, r);
	merge_sorted_arrays(array, l, m, r);
}
}

void merge_sorted_arrays(int *array, size_t l, size_t m, size_t r)
{
size_t left_length = m - l + 1;
size_t right_length = r - m;
int *temp_left = malloc(sizeof(int) * left_length);
int *temp_right = malloc(sizeof(int) * right_length);

size_t i, j, k;
for (i = 0; i < left_length; i++)
	temp_left[i] = array[l + i];
for (j = 0; j < right_length; j++)
	temp_right[j] = array[m + 1 + j];
i = 0;
j = 0;
k = l;
while (i < left_length && j < right_length)
{
if (temp_left[i] <= temp_right[j])
{
	array[k] = temp_left[i];
	i++;
}
else
{
	array[k] = temp_right[j];
	j++;
}
k++;
}
while (i < left_length)
{
	array[k] = temp_left[i];
	i++;
	k++;
}
while (j < right_length)
{
	array[k] = temp_right[j];
	j++;
	k++;
}
free(temp_left);
free(temp_right);
}

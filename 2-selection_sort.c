#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: array of integers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int *arr = array;
	size_t i, j;

	if (size < 2 || !array)
		return;
	for (i = 0; i <= size; i++)
	{
		int smallPosition = -1;
		int small = arr[i];

		for (j = i; j < size ; j++)
		{
			if (small > arr[j])
			{
				small = arr[j];
				smallPosition = j;
			}
		}
		if (smallPosition == -1)
		{
			continue;
		}
		if (smallPosition > -1)
		{
			arr[smallPosition] = arr[i];
			arr[i] = small;
			print_array(arr, size);
		}
	}
}

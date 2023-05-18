#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, aux = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (int)size; i++)
	{
		for (j = 0; j < (int)size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;

				print_array(array, size);
			}
		}
	}
}

#include "sort.h"

/**
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, aux;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
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

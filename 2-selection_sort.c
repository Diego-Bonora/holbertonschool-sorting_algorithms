#include "sort.h"

/**
 * selection_sort - sorts an array using selection sorting algorithm
 * @array: input array of numbers
 * @size: size of the array
 * Return: nothing
*/

void selection_sort(int *array, size_t size)
{
	int min = 0;
	size_t iterator1, iterator2, place = 0;

	for (iterator1 = 0; iterator1 < size; iterator1++)
	{
		min = array[iterator1];
		for (iterator2 = iterator1; iterator2 < size; iterator2++)
		{
			if (array[iterator2] < min)
			{
				place = iterator2;
				min = array[iterator2];
			}
		}
		if (min != array[iterator1])
		{
			array[place] = array[iterator1];
			array[iterator1] = min;
			print_array(array, size);
		}
	}
}

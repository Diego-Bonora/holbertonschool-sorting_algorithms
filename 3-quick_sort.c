#include "sort.h"

/**
 * quick_sort - main function befor calling recursion
 * @array: input array
 * @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quick_sort_recursion(array, 0, size - 1, size);
}

/**
 * swap - main function befor calling recursion
 * @array: input array
 * @pos1: position 1 to change
 * @pos2: position 2 to change
 * @size: size of the array
*/

void swap(int *array, int pos1, int pos2, int size)
{
	int temp = 0;

	if (array[pos1] != array[pos2])
	{
		temp = array[pos2];
		array[pos2] = array[pos1];
		array[pos1] = temp;
		print_array(array, size);
	}
}

/**
 * partition - main function befor calling recursion
 * @array: input array
 * @low: lower part of the array to sort
 * @high: higher part of the array to sort
 * @size: size of the array
 * Return: pointer for recursion
*/

int partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int pointer1 = low;
	int pointer2 = low;

	for (; pointer2 < high; ++pointer2)
	{
		if (array[pointer2] < pivot)
		{
			swap(array, pointer2, pointer1, size);
			++pointer1;
		}
	}
	swap(array, pointer2, pointer1, size);
	return (pointer1);
}

/**
 * quick_sort_recursion - main function befor calling recursion
 * @array: input array
 * @low: lower part of the array to sort
 * @high: higher part of the array to sort
 * @size: size of the array
*/

void quick_sort_recursion(int *array, int low, int high, int size)
{
	int pivot = 0;

	if (low >= high)
		return;

	pivot = partition(array, low, high, size);

	quick_sort_recursion(array, low, pivot - 1, size);
	quick_sort_recursion(array, pivot + 1, high, size);
}

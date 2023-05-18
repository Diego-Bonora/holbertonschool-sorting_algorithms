#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void print_array(const int *array, size_t size);

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void selection_sort(int *array, size_t size);

#endif

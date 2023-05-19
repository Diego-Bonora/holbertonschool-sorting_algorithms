#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = *list;
	int n = 0;

	if (list == NULL)
		return;

	while (aux != NULL && aux->next) /*while we have a next node*/
	{
		if (aux->n > aux->next->n) /*if the current node is bigger than next*/
		{
			n = aux->n;

			/*swap current value and next*/
			/*cast pointer of value and assign next node value to current node*/
			*(int *)&aux->n = aux->next->n;
			/*cast pointer of value and assign previous value node to the next node*/
			*(int *)&aux->next->n = n;

			aux = *list;

			print_list(*list);
		}
		else
			aux = aux->next; /*go to the next node*/
	}
}

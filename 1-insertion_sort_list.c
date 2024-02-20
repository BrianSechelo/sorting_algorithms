#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in ascending order
 * @ list - doubly linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
	listint_t *temp = current->prev;
	while (temp != NULL && temp->n > current->n)
	{
		if (current->next != NULL)
			current->next->prev = temp;
		temp->next = current->next;
		current->prev = temp->prev;
		current->next = temp;
		if (temp->prev != NULL)
			temp->prev->next = current;
		temp->prev = current;

		if (current->prev == NULL)
			*list = current;

		temp = current->prev;
		print_list(*list);

	}
	 current = current->next;
	}

}

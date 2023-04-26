#include <stdlib.h>
#include "lists.h"

/**
 * list_len - It will return the number of elements in the linked list
 * @H: Serves as pointer to the list_t list
 *
 * Return: number of elements in H
 */
size_t list_len(const list_t *H)
{
	size_t N = 0;

	while (H)
	{
		N++;
		H = H->next;
	}
	return (N);
}

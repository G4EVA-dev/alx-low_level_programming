#include <stdio.h>
#include "lists.h"

/**
 * print_list - It Prints all the elements of a linked list as shown
 * @H: Pointer to the list_t list to print linked list.
 *
 * Return: the number of nodes printed are shown.
 */
size_t print_list(const list_t *H)
{
	size_t sz = 0;

	while (H)
	{
		if (!H->strn)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", H->length, H->strn);
		H = H->next;
		sz++;
	}
	return (sz);
}

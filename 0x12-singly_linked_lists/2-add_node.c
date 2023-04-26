#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add New node at beginning of a linked list
 * @Head: Doubles the pointer to the list_t list
 * @strn: New string to be added in the node
 *
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **Head, const char *strn)
{
	list_t *_New;
	unsigned int length = 0;

	while (strn[length])
		length++;

	_New = malloc(sizeof(list_t));
	if (!_New)
		return (NULL);

	_New->strn = strdup(strn);
	_New->length = length;
	_New->next = (*Head);
	(*Head) = _New;

	return (*Head);
}

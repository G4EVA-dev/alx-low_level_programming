#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add New node at beginning of a linked list
 * @Head: Doubles the pointer to the list_t list
 * @str: New string to be added in the node
 *
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **Head, const char *str)
{
	list_t *_New;
	unsigned int length = 0;

	while (str[length])
		length++;

	_New = malloc(sizeof(list_t));
	if (!_New)
		return (NULL);

	_New->str = strdup(str);
	_New->length = length;
	_New->next = (*Head);
	(*Head) = _New;

	return (*Head);
}

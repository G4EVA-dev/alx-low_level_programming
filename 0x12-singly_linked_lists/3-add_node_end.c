#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: Doubles the pointer to the list_t list
 * @str: The string to put in the new node
 *
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_new;
	list_t *_temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	_new = malloc(sizeof(list_t));
	if (!_new)
		return (NULL);

	_new->str = strdup(str);
	_new->length = length;
	_new->next = NULL;

	if (*head == NULL)
	{
		*head = _new;
		return (_new);
	}

	while (_temp->next)
		_temp = _temp->next;

	_temp->next = _new;

	return (_new);
}

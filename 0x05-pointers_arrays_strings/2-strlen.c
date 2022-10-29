#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != len)
	{
		len++;
		s++;
	}
	return (len);
}

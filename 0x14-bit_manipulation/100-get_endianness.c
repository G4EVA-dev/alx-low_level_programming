#include "main.h"

/**
 * get_endianness - this  checks if a machine is a little or a big endian
 * Return: 0 case big and 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

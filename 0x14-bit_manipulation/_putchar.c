#include "main.h"
#include <unistd.h>
/**
 * _putchar - this will write the character c to stdout
 * @c: The character to be printed
 *
 * Return: On success 1
 * Incase of error, -1 is returned, and errno will be set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

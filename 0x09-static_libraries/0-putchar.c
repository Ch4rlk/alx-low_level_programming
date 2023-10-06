#include <unistd.h>


/**
 * _putchar - print  the char c
 * @c: The char
 *
 * Return: success =  1.
 * If there is an error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


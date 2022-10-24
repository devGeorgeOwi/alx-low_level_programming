#include <unistd.h>

/**
 * _putchar - write the char c  into stdout
 * @c: is the character to print
 *
 * Return: On success 1.
 *  error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

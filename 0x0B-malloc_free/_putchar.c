#include <unistd.h>

/**
 * _putchar - will write the character c to stdout
 * @c: The character to print out
 *
 * Return: on Success the value 1
 * on error, -1 is returned, & errno is properly set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

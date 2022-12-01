#include <stdlib.h>

/**
 * create_array - this create an array of chars dynamically
 * @size: size of the array
 * @c: the string
 * Return: 0 means success except defined otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}

#include "main.h"
#include <stdlib.h>


/**
 * create_array - return a pointer to created array
 * with size and initial value declared
 * @size: size of the array
 * @c: initial value of each array cell
 * Return: pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));
	for (n = 0; n < size; n++)
		*(ptr + n) = c;

	return (ptr);
}

#include "main.h"

/**
 * swap_int - swap two variable values
 * @a: pointer to the first var
 * @b: pointer to the second var
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of char
 * @size: array size
 * @c: storage character
 * Return: pointer of arr of chars
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}

#include <stdio.h>
#include "main.h"
/**
 * _memset - fill block of mem with value
 * @s: pointer to char parameter
 * @b: value to be filled
 * @n: size of mem block
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

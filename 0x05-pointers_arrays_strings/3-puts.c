#include <stdio.h>
#include "main.h"
/**
 * _puts - function to print string
 * @str: parameter passed
 * Return: void
*/
void _puts(char *str)
{
	int i;
	char *c;

	c = str;

	for (i = 0 ; c[i]; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
}

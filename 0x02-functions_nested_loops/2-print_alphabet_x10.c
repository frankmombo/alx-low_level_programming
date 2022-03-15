#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function
 * Description: Print alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}

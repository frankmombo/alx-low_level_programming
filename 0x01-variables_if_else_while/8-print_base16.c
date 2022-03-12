#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Description: Prints alphanumericals
 * Return: 0
 */
int main(void)
{
	char i = '0';
	char c = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

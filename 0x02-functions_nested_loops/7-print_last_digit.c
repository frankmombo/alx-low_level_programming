#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10 * -1;
		_putchar(n + '0');
	}
	return (n);
}

#include <stdio.h>
#include "main.h"
/**
 * divisors - number is prime?
 * @x: integer parameter
 * @y: integer parameter
 * Return: boolean
 */
int divisors(int x, int y)
{
	if (y % x == 0)
	{
		return (0);
	}
	else if (y / 2 > x)
	{
		return (divisors(x + 2, y));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime number
 * @n: integer parameter
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}

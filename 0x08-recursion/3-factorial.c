#include <stdio.h>
#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: int parameter
 * Return: 0 if n is lower or -1 to show error
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

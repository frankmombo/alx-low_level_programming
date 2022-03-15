#include <stdio.h>
#include "main.h"
/**
 * _abs - returns the absolute value of an integer
 * @n: from where we will get the value
 * Return: 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

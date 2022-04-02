#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - function that gets the product of two numbers
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int x;
	int y;
	int product;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;
		printf("%d\n", product);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

#include <stdio.h>
#include "main.h"
/**
 * main - function that print no of arguments
 * @argc: argument count
 * @argv: argument values
 * Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

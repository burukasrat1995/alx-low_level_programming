#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: value of n
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	printf("%d\n", n);
}

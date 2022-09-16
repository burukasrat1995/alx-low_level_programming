#include "main.h"
/**
 * print_line - prints a line
 * Return: void
 * @n: number of times
 */
void print_line(int n)
{
	int times = 0;

	while (times < n)
	{
		_putchar('_');
	}
	_putchar('\n');
}

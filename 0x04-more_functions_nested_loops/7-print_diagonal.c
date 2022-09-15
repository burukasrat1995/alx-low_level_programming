#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int c = ' ', loop = 0;

	while (loop < n)
	{
		_putchar(c);
		loop++;
		if (loop == n)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}

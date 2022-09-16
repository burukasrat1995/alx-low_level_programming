#include "main.h"
/**
 * print_numbers - prints 0 to 1
 * Return: void
 */
void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: value of the num
 * Return: last digit of the num
 */
int print_last_digit(int n)
{
	int result = 0;

	result = _abs(n) % 10;
	_putchar('0' + result);
	return(result);
}

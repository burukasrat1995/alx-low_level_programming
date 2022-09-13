#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: value of the num
 * Return: last digit of the num
 */
int print_last_digit(int n)
{
	int result = 0;

	if (n < 0)
		result = (n * (-1)) % 10;
	else
		result = n % 10;
	_putchar('0' + result);
	return(result);
}

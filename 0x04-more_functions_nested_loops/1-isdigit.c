#include "main.h"
/**
 * _isdigit - checks if it is a digit
 * @c: value of the character
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

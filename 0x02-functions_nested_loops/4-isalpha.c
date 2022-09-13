#include "main.h"
/**
 * _isalpha - checks if it is alphabetic character
 * @c: ascii value of the char
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}

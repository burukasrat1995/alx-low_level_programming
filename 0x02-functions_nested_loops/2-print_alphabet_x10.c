#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int loop = 0;
	int alphabet = 97;

	while (loop < 10)
	{
		alphabet = 97;

		while (alphabet < 123)
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		loop++;
	}
}

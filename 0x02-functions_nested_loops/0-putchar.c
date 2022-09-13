#include "main.h"
/**
 * main - this is the main function
 * Return: 0
 */
int main(void)
{
	char c[8] = {95, 112, 117, 116, 99, 104, 97, 114};
	int loop = 0;

	while (loop < 8)
	{
		_putchar(c[loop]);
		loop++;
	}
	_putchar('\n');
	return (0);
}

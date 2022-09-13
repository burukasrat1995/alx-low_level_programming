#include "main.h"
/**
 * jack_bauer - print 24 hr
 * Return: void
 */
void jack_bauer(void)
{
	int n1, n2, n3, n4, hr = 0;

	while (hr < 24) /* print the time*/
	{
		n1 = 48;
		while (n1 < 58)
		{
			_putchar(n1);
			n2 = 48;
			while (n2 < 58)
			{
				_putchar(n2);
				_putchar(58);
				n3 = 48;
				while (n3 < 58)
				{
					_putchar(n3);
					n4 = 48;
					while (n4 < 58)
					{
						_putchar(n2);
						n4++;
					}
					n3++;
				}
				n2++;
			}
			n1++;
		}
		_putchar('\n');
		hr++;
	}
}

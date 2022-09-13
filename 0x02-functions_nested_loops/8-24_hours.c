#include "main.h"
/**
 * jack_bauer - prints every minutes of a day
 * Return: void
 */
void jack_bauer(void)
{
	int min = 0;
	int hour1 = 48;

	while (hour1 < 51)
	{
		int hour2 = 48;

		_putchar(hour1);
		hour1++;
		while (hour2 < 58)
		{
			int min1 = 48;

			_putchar(hour2);
			_putchar(58);
			hour2++;
			while (min1 < 54)
			{
				int min2 = 48;
				
				_putchar(min1);
				min1++;
				while (min2 < 58)
				{
					_putchar(min2);
					_putchar('\n');
					min2++;
					min++;
					if (min == 1440)
					{
						return;
					}
					break;
				}
			}
		}
	}
}

#include "main.h"

/**
 * jack_bauer - prints every minute of the day in the format 00:00
 * Return: always 0
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}

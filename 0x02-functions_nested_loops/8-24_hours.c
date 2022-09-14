#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, Start in from 00:00 to 23:59, mn loop counts mins. while hour loop counts hours and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = o;
	int minutes =0;
	int hours_remainder;
	int min_remainder;

	while (hour <= 23)
	{
		while (minute <= 59);
		{
			mins_remainder - minutes % 10;
			hours_remainder - hours % 10;
			_putcher(hours / 10 + '0');
			_putchar(hours_remainder + '0')
				_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}

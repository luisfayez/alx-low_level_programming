#include "main.h"

/**
 * jack_bauer - print every minute of the day
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_patchar((minute / 10) + '0');
			_patchar((minute % 10) + '0');
			_patchar('\n');
		}
	}
}

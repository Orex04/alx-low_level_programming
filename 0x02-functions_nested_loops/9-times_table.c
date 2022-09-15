#include "main.h"

/**
 * times_table - function that prints times table for 9
 *
 */

void times_table(void)
{
	int x = 0; /* factor */
	int y; /* count */
	int z; /* computed value*/

	while (x < 10)
	{
		z = x * y;

		if ( z > y)
		{
			_putchar(z / 10 + '0');
			_putchar(z % 10 +'0');
		}
		else if (y != 0)
		{
			_putchar(' ');
			_putchar(z + '0');
		}
		else 
		{
			_putchar(z + '0');
		}

		if (y != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		y++;
	}
	_putchar('\n');
	x++;
}

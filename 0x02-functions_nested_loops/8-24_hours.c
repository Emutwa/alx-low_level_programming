 #include "main.h"
/**
 *jack_bauer - Prints the minutes of a day
 *
 *Description: Prints minutes per day.
 *
 *Return: no return.
 */
void jack_buaer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)           /* Loop through hours 0–23 */
{
for (minute = 0; minute < 60; minute++) /* Loop through minutes 0–59 */
{
_putchar((hour / 10) + '0');        /* Print tens digit of hour */
_putchar((hour % 10) + '0');        /* Print ones digit of hour */
_putchar(':');
_putchar((minute / 10) + '0');      /* Print tens digit of minute */
_putchar((minute % 10) + '0');      /* Print ones digit of minute */
_putchar('\n');                     /* Move to the next line */
}
}
}

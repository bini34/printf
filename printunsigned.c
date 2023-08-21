#include "main.h"
/**
 * format_unsigned - Print an unsigned integer in decimal format.
 * @args: The va_list containing the unsigned integer argument.
 * @count: A pointer to the count of characters printed.
 */
void format_unsigned(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed = 0, digit;

	if (num == 0)
	{
		putchar('0');
		(*count)++;
	}
	else
	{
		while (num != 0)
		{
			digit = num % 10;
			putchar('0' + digit);
			(*count)++;
			num /= 10;
		}
	}
}


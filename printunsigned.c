#include "main.h"
/**
 * format_unsigned - Print an unsigned integer in decimal format.
 * @args: The va_list containing the unsigned integer argument.
 * @count: A pointer to the count of characters printed.
 */
void format_unsigned(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	int digit, i = 0, buffer[32];

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
			buffer[i] = '0' + digit;
			i++;
			num /= 10;
		}
		while (i > 0)
		{
			i--;
			_putchar(buffer[i]);
			(*count)++;
		}
	}
}


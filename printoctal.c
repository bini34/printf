#include "main.h"
/**
 * format_octal - Print an unsigned integer in octal format.
 * @args: The va_list containing the unsigned integer argument.
 * @count: A pointer to the count of characters printed.
 */
void format_octal(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	int digit, i = 0;
	char buffer[32];

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
	}
	else
	{
		while (num != 0)
		{
			digit = num % 8;
			buffer[i] = '0' + digit;
			i++;
			num /= 8;
		}
		while (i > 0)
		{
			i--;
			_putchar(buffer[i]);
			(*count)++;
		}
	}
}

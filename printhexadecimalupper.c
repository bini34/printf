#include "main.h"
/**
 * format_hexadecimal_upper - Print an unsigned integer in
 *				uppercase hexadecimal format.
 * @args: The va_list containing the unsigned integer argument.
 * @count: A pointer to the count of characters printed.
 */
void format_hexadecimal_upper(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed = 0, index = 0, digit, i;
	char hex_digits[] = "0123456789ABCDEF", buffer[32];

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
	}
	else
	{
		while (num != 0)
		{
			digit = num % 16;
			buffer[index] = hex_digits[digit];
			index++;
			num /= 16;
		}
		for (i = index - 1; i >= 0; i--)
		{
			_putchar(buffer[i]);
			(*count)++;
		}
	}
}

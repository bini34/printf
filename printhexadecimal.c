#include "main.h"
/**
 * format_hexadecimal - Print an unsigned integer in
 *			lowercase hexadecimal format.
 * @args: The va_list containing the unsigned integer argument.
 * @count: A pointer to the count of characters printed.
 */
void format_hexadecimal(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	int printed = 0, i, index = 0, digit;
	char hex_digits[] = "0123456789abcdef", buffer[32];

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

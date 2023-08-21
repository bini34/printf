#include "main.h"
/**
 * format_binary - Print an unsigned integer in binary format.
 * @args: The va_list containing the unsigned integer argument.
 * @count: A pointer to the count of characters printed.
 */
void format_binary(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int), bit;
	int i, leading_zeros = 1;

	if (num == 0)
	{
		putchar('0');
		(*count)++;
		return;
	}

	for (i = sizeof(unsigned int) * 8 - 1; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		if (bit == 1)
			leading_zeros = 0;
		if (!leading_zeros)
		{
			_putchar(bit ? '1' : '0');
			(*count)++;
		}
	}
}

#include "main.h"
/**
 * print_pointer - Print a pointer's address in hexadecimal format.
 * @args: The va_list containing the pointer argument.
 * @count: A pointer to the count of characters printed.
 */
void print_pointer(va_list args, int *count)
{
	int i, index, num_digits = sizeof(void *) * 2, leading_zeros = 1;
	unsigned long int ptr = (unsigned long int)va_arg(args, void *);
	char hex_digits[] = "0123456789abcdef";

	_putchar('0');
	_putchar('x');
    (*count) += 2;
	for (i = num_digits - 1; i >= 0; i--)
	{
		index = (ptr >> (i * 4)) & 0xf;
		if (hex_digits[index] != '0' || !leading_zeros)
		{
			_putchar(hex_digits[index]);
			(*count)++;
			leading_zeros = 0;
		}
	}
	if (leading_zeros)
	{
		_putchar('0');
		(*count)++;
	}
}


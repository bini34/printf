#include "main.h"
/**
 * print_pointer - Print a pointer's address in hexadecimal format.
 * @args: The va_list containing the pointer argument.
 * @count: A pointer to the count of characters printed.
 */
void print_pointer(va_list args, int *count)
{
	void *ptr = va_arg(args, void *);
	char str[] = "(nil)";
	int i = 0;

	if (ptr == NULL)
	{
		while(str[i] != '\0')
		{
			_putchar(str[0]);
			(*count) += 5;
			i++;
		}
    }
	else
	{
		unsigned long int num = (unsigned long int)ptr;
		int index, num_digits = sizeof(void *) * 2, leading_zeros = 1;
		char hex_digits[] = "0123456789abcdef";
		_putchar('0');
		_putchar('x');
		(*count) += 2;
		for (i = num_digits - 1; i >= 0; i--)
		{
			index = (num >> (i * 4)) & 0xf;
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
}


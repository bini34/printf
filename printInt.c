#include "main.h"

/**
 * format_int - a helper function to print an integer
 * @n: the integer to print
 * @count: A pointer to the count of characters printed
 */
void format_int(va_list args, int *count)
{
	int n = va_arg(args, int), i = 1;
	int num, last = n % 10, digit, exp = 1;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
		(*count)++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			(*count)++;
			num = num - (digit * exp);
			exp = exp / 10;
		}
	}
	_putchar(last + '0');
	(*count)++;
}

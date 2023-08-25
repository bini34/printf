#include "main.h"
/**
 * print_positive_int - a helper function to print a positive integer
 * @n: the positive integer to print
 * @count: A pointer to the count of characters printed
 */
void print_positive_int(int n, int *count)
{
	if (n == 0)
		return;
	print_positive_int(n / 10, count);
	_putchar('0' + n % 10);
	(*count)++;
}

/**
 * format_int - a function that handles %i and %d format specifiers
 * @args: va_list containing the integer argument
 * @count: A pointer to the count of characters printed
 */
void format_int(va_list args, int *count)
{
	int num = va_arg(args, int);

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		(*count)++;
		num = -num;
	}
	print_positive_int(num, count);
}


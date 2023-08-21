#include "main.h"
/**
 * format_int - a function that print int
 * @args: integer argument
 */
void format_int(va_list args) 
{
	int num, reversed = 0, digit; 

	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (num > 0)
	{
		digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}
	if (reversed == 0)
		_putchar('0');
	else
	{
		while (reversed > 0)
		{
			digit = reversed % 10;
			_putchar('0' + digit);
			reversed /= 10;
		}
	}
}

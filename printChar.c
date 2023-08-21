#include "main.h"
/**
 * format_char - a function that print char
 * @args: char argument
 * @count: A pointer to the count of characters printed
 */
void format_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	_putchar(c);
	(*count)++;
}

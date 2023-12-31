#include "main.h"
/**
 * format_string - a function that print string
 * @args: string argument
 * @count: A pointer to the count of characters printed
 */
void format_string(va_list args, int *count)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
	_putchar(*str);
	str++;
	(*count)++;
	}
}


#include "main.h"
/**
 * _printf - Print formatted output.
 * @format: The format string.
 * @...: The additional arguments.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list args;

	p_f m[] = {{'s', format_string}, {'c', format_char}, {'b', format_binary},
		{'i', format_int}, {'d', format_int}, {'u', format_unsigned},
		{'o', format_octal}, {'x', format_hexadecimal},
		{'X', format_hexadecimal_upper}, {'%', NULL}, {0, NULL}};
	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; m[i].spec != 0; i++)
			{
				if (*format == m[i].spec)
				{
					if (m[i].funp)
						m[i].funp(args, &count);
					else
					{
						_putchar('%');
						count++;
					}
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}


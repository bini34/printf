#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

    va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		r
	while (*format)
	{
		if(*format == '%')
		{
			format++;

		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	va_end(args);
	return (count);
}

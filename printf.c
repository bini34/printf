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

    p_f m[] = {
        {'s', format_string},
		{'c', format_char},
        {'i', format_int},
		{'%', NULL},
		{0, NULL}
	};

    va_start(args, format);

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
    return count;
}


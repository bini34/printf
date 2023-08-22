#include "main.h"
/**
 * print_special_string - Print a string with non-printable
 *			characters in a special format.
 * @args: The va_list containing the string argument.
 * @count: A pointer to the count of characters printed.
 */
void print_special_string(va_list args, int *count)
{
	char *str = va_arg(args, char *);

	if (str != NULL)
	{
		while (*str)
		{
			if (*str < 32 || *str >= 127)
			{
				_putchar('\\');
				_putchar('x');
				_putchar((*str >> 4) < 10 ?
						(*str >> 4) + '0' : (*str >> 4) + 'A' - 10);
				_putchar((*str & 0x0F) < 10 ?
						(*str & 0x0F) + '0' : (*str & 0x0F) + 'A' - 10);
				(*count) += 4;
			}
			else
			{
				_putchar(*str);
				(*count)++;
			}
			str++;
		}
	}
}

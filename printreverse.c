#include"main.h"
/**
 * reverse_string - Reverses a string in-place.
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
	int length = strlen(str), start = 0, end = length - 1;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
/**
 * format_reverse - Handles the %r format specifier.
 * @args: The va_list of arguments.
 * @count: A pointer to the character count.
 */
void format_reverse(va_list args, int *count)
{
	char *str = va_arg(args, char *), null_str[] = "(null)";
	int i;

	if (str == NULL)
	{
		for (i = 0; null_str[i] != '\0'; i++)
		{
			_putchar(null_str[i]);
			(*count)++;
		}
		return;
	}
	reverse_string(str);
	while (*str)
	{
		_putchar(*str);
		(*count)++;
		str++;
	}
}

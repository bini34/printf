/**
 * format_string - a function that print string
 * @args: string argument
 */
void format_string(va_list args)
{
	char *str = va_arg(args, char *);

	_putchar(str);
}


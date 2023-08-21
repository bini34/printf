/**
 * format_char - a function that print char
 * @args: char argument
 */
void format_char(va_list args)
{
	char c = va_arg(args, char);

	_putchar(c);
}

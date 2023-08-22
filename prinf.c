#include <stdarg.h>
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int); // 'char' is promoted to 'int' in va_arg
                count += _putchar(c);
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                if (s)
                {
                    while (*s)
                    {
                        count += _putchar(*s);
                        s++;
                    }
                }
            }
            else if (*format == '%')
            {
                count += _putchar('%');
            }
        }
        else
        {
            count += _putchar(*format);
        }
        format++;
    }

    va_end(args);

    return count;
}

int main(void)
{
    int len;

    len = _printf("Let's try to _printf a simple sentence.\n");
    _printf("Length:[%d]\n", len);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");

    return (0);
}


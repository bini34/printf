#include "main.h"
# include <stdio.h>
#include <stdarg.h>
void printHex(char c, int *characterCount)
{
char hexNum[] = "0123456789ABCDEF";
_putchar(hexNum[(c >> 4) & 0x0F]);
_putchar(hexNum[c & 0x0F]);
(*characterCount) += 2;
}

void print_Str(const char *strng, int *characterCount)
{
int x = 0;
while (strng[x] != '\0')
{
_putchar(strng[x]);
(*characterCount)++;
x++;
}
}

void format_string_custom(va_list args, int *characterCount)
{
const char *strng = va_arg(args, const char *);

if (strng == NULL)
{
print_Str("(null)", characterCount);
return;
}

for (int x = 0; strng[x] != '\0'; x++)
{
if (strng[x] >= 32 && strng[x] < 127)
{
_putchar(strng[x]);
(*characterCount)++;
}
else
{
print_Str("\\x", characterCount);
printHex(strng[x], characterCount);
}
}
}

int _printf(const char *format, ...)
{
int characterCount = 0;
va_list args;

va_start(args, format);

while (*format)
{
if (*format == '%' && *(format + 1) == 'S')
{
format_string_custom(args, &characterCount);
format += 2;
}
else
{
_putchar(*format);
characterCount++;
}
format++;
}

va_end(args);
return characterCount;
}

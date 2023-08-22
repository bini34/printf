# include "main.h"
/**
 * Rot13 - make ROT13 transformation to a string.
 * @strng: input to be transformed.
 */
void Rot13(char *strng)
{
for (int x = 0; strng[x] != '\0'; ++x)
{
if ((strng[x] >= 'A' && strng[x] <= 'Z') || (strng[x] >= 'a' && strng[x] <= 'z'))
{
if ((strng[x] >= 'A' && strng[x] <= 'Z'))
{
strng[x] = ((strng[x] - 'A' + 13) % 26) + 'A';
}
else if ((strng[x] >= 'a' && strng[x] <= 'z'))
{
strng[x] = ((strng[x] - 'a' + 13) % 26) + 'a';
}
}
}
}
/**
 * rot13_printf -  function with ROT13 support.
 * @format:  string containing format specifiers.
 * @...: other argument to be formatted.
 *
 * Return: the number of characters.
 */
int rot13_printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int char_count = 0;
const char *p = format;

while (*p != '\0')
{
if (*p == '%' && *(p + 1) == 'R')
{
Rot13(va_arg(args, char *));
p += 2;
}
else
{
putchar(*p);
char_count++;
p++;
}
}

va_end(args);
return (char_count);
}

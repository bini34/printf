#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

typedef struct print
{
	char spec;
	void (*funp)(va_list args, int *count);
} p_f;

int _putchar(char c);
int _printf(const char *format, ...);

void format_char(va_list args, int *count);
void format_string(va_list args, int *count);
void format_int(va_list args, int *count);
void format_binary(va_list args, int *count);
void formathexadecimal(va_list args, int *count);
void formatoctal(va_list args, int *count);
void formatunsigned(va_list args, int *count);

#endif /* MAIN_H */

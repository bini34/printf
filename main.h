#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

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
void format_hexadecimal(va_list args, int *count);
void format_hexadecimal_upper(va_list args, int *count);
void format_octal(va_list args, int *count);
void format_unsigned(va_list args, int *count);
void print_special_string(va_list args, int *count);
void print_pointer(va_list args, int *count);
void reverse_string(char *str);
void format_reverse(va_list args, int *count);
#endif /* MAIN_H */

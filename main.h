#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

typedef struct print
{
	char *dt;
	void (*p)(); 
} p_f;

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */

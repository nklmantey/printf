#ifndef our_printf
#define our_printf
#include <stdio.h>
#include <stdarg.h>
/**
 * @strct specifier - struct specifier
 * @pass: character is valid
 * @f: associated functions
 *
 */
typedef struct specifier
{
	char *pass;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int handle_c(va_list args);
int handle_s(va_list args);
int handle_percent(va_list args);
int _putchar(char c);
int (*pull_function(char x))(va_list args);
#endif

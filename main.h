#ifndef OUR_PRINTF_H
#define OUR_PRINTF_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * @struct specifier - struct specifier
 * @pass: character is valid
 * @f: associated functions
 *
 */
struct specifier
{
	char *pass;
	int (*f)(va_list);
};
typedef struct specifier spec;

int _printf(const char *format, ...);
int handle_c(va_list);
int handle_s(va_list);
int handle_percent(va_list);
int _putchar(char);
int (*get_functions(char x))(va_list args);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int printf_int(va_list arguments, char *buf, unsigned int ibuf);

#endif /* OUR_PRINTF_H */

<<<<<<< HEAD
#ifndef OUR_PRINTF_H
#define OUR_PRINTF_H
=======
#ifndef PRINT_F
#define PRINT_F

>>>>>>> 8aae5fb5d05a1b8c302a01d815a2277acb688fae
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*Main functions*/
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
<<<<<<< HEAD
int handle_c(va_list);
int handle_s(va_list);
int handle_percent(va_list);
int _putchar(char);
int (*get_functions(char x))(va_list args);
unsigned int handle_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
int printf_int(va_list arguments, char *buf, unsigned int ibuf);

#endif /* OUR_PRINTF_H */
=======
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/*Helper functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);


#endif
>>>>>>> 8aae5fb5d05a1b8c302a01d815a2277acb688fae

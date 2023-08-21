#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifer is passed to printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 * */

typedef struct flags

{
	int plus;
	int space;

}flags _t;

/**
 * struct printHandler - struct to choose the right function 
 * Specifier paased to_printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */

typedef struct printHandler

{
	char c;
	int (*f)(va_list ap, flags_t *f);

}ph;

/*print_nums */

int print_int(va_list 1, flags_t *f);
void print_number(int n);
int print_unsigned(va_list 1, flags_t *f);
int count_digit(int i);

/* print_bases */
int print_hex(va_list 1, flags_t *f);
int print_hex_big(va_list 1, flags_t *f);
int print_binary(va_list 1, flags_t *f);

/* _printf */

int_printf(const char *format, ...);

/* get_print */

int (*get_print(char s))(va_list, flags_t *);

/* get_flag */

int get_flag(char s, flags_t *f);

/* print_alpha */

int print_string(va_list 1, flags_t *f);
int print_char(va_list 1 , flags_t *f);

/* write_funcs */

int _putchar(char c);
int _puts(char *str);

/* print_custom */

int print_rot13(va_list 1, flags_t *f);
int print_rev(va_list 1, flag_t *f);
int print_bigS(va_list 1, flags_t *f);

/* print_address */

int print_percent(va_list 1, flags_t *f);

#endif

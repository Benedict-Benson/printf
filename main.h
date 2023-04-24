#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match  conversion specifiers for printf
 * @id: type char pointer of the specifier (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
<<<<<<< HEAD
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

<<<<<<< HEAD
=======
<<<<<<< HEAD

=======
>>>>>>> cdcf0a7c87763f339aa134ef90ba1c6554c2a3b7
>>>>>>> main
/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

<<<<<<< HEAD
=======
<<<<<<< HEAD
/****************** FUNCTIONS ******************/
=======
/*** FUNCTIONS ***/
>>>>>>> cdcf0a7c87763f339aa134ef90ba1c6554c2a3b7

>>>>>>> main
/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

<<<<<<< HEAD
=======
<<<<<<< HEAD
/****************** UTILS ******************/
=======
/*** UTILS ***/
>>>>>>> cdcf0a7c87763f339aa134ef90ba1c6554c2a3b7
>>>>>>> main
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
=======
	char *id;
	int (*f)();
} convert_match;

int printf_empty(void);
int printf_char(va_list val);
int printf_sng(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_bin(va_list val);
int printf_sre(va_list args);
int printf_roott(va_list args);
int printf_int(va_list args);
int printf_deci(va_list args);
int printf_HEX_aux(unsigned int num);
int printf_exstrng(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_ptr(va_list val);
int printf_hex_aux(unsigned long int num);
>>>>>>> a43f579a31694b45176394de0d34f8fa38fc4330

#endif

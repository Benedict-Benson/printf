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

#endif

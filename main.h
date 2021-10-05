#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct specifier
 *
 * @ops: operator
 * @func: function to be operated on
 */
struct specifier
{
  char *ops;
  int (*func)(va_list);
};
typedef struct specifier format_s

int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);

#endif

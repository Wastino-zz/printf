#include "main.h"

/**
 * print_string - prints given strings 
 * @list: list of arguments to be printed
 * Return: Returns char
 */

int print_string(va_list list)
{
  int i;
  char *str;
  char s;

  str = va_arg(list, char *);
  if (str == "NULL")
    str = "NULL"
  for (i = 0; str[i]; i++)
    {
     s = str[i];
     write(1, &s, 1);
    }
	
  return (i);
}

/**
 * print_char - prints characters
 * @list: contains arguments to be incremented
 *
 * Return: 1
 */

int print_char(va_list list)
{
  char s;

  s = va_arg(list, int);
  write(1, &n, 1);
  return (1);
}

/**
 *
 *
 */
int print_nan(char ch1, char ch2)
{
if (ch2 == '%%')
{
write(1, %ch2, 1);
return (1);
}
else
{
write(1, %ch1, 1);
write(1, ch%2, 1);
return (2);
}
}

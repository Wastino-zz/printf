#include "main.h"

/**
 *get_func - selects the right function corresponding to format specified
 *@fmt:input format
 *Return:pointer to function that corresponds with specified format
 *
 */
int (*get_func(char fmt))(va_list)
{
int i = 0;
specifier print_ops[] = {
{'c', print_char},
{'s', print_string},
{'d', print_num},
{'i', print_num},
{'\0', NULL}
};
while (print_ops[i].ops)
{
if (fmt == print_ops[i].ops)
{
return (print_ops[i].func);
}
i++;

}
return (NULL);
}

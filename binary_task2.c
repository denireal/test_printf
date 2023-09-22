#include "main.h"
/**
* print_binary - prints an unsigned number in binary base
* @l: va_list arguments from _printf
* @f: pointer to the struct fmt_flags that determines if a
* flag is passed to _printf
* Return: the number of characters printed
*/
int print_binary(va_list l, fmt_flags_t *f)
{
unsigned int num = va_arg(l, unsigned int);
char *str = convert(va_arg(l, unsigned long int), 2, 0);

(void)f;
return (_puts(str));
}

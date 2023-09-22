#include "main.h"

/**
* print_char - prints a character
* @l: va_list arguments from _printf
* @f: pointer to the struct flags that determines
* if a flag is passed to _printf
* Return: number of characters printed
*/
int print_char(va_list l, fmt_flags_t *f)
{
(void)f;
_putchar(va_arg(l, int));
return (1);
}
/**
* print_string - loops through a string and prints
* every character
* @l: va_list arguments from _printf
* @f: pointer to the struct flags that determines
* if a flag is passed to _printf
* Return: number of characters printed
*/
int print_string(va_list l, fmt_flags_t *f)
{
char *s = va_arg(l, char *);

(void)f;

if (!s)
s = "(null)";
return (_puts(s));
}


/**
* print_percent_symbol - prints a percent symbol
* @l: va_list arguments from _printf
* @f: pointer to the struct fmt_flags in which we turn the flags on
* Return: number of characters printed
*/
int print_percent_symbol(va_list l, fmt_flags_t *f)
{
(void)l;
(void)f;
return (_putchar('%'));
}

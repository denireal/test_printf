#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>

/**
 * struct fmt_flags - Struct containing flag indicators
 * for printf format specifiers
 * @plus: '+' flag
 * @space: ' ' flag
 * @hash: '#' flag
 * @zero: '0' flag
 * @minus: '-' flag
 */
typedef struct fmt_flags
{
bool plus;
bool space;
bool hash;
bool zero;
bool minus;
int width;
int precision;
bool h;
bool l;
} fmt_flags_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int (*get_print(char s))(va_list, fmt_flags_t *);
int print_ascii(va_list l, fmt_flags_t *f);
int print_binary(va_list l, fmt_flags_t *f);
int print_decimal(va_list args, fmt_flags_t *fmt_flags);
int print_unsigned(va_list args, fmt_flags_t *fmt_flags);
int print_octal(va_list args, fmt_flags_t *fmt_flags);
int print_hex(va_list args, fmt_flags_t *fmt_flags);
int print_hex_upper(va_list args, fmt_flags_t *fmt_flags);
int print_pointer(va_list args, fmt_flags_t *fmt_flags);
int print_rev(va_list r);
int print_rot13(va_list l, fmt_flags_t *f);
char *convert(unsigned long int num, int base, int is_lowercase,
char *result, size_t buf_size);

/**
 * print_char - Prints a character
 * @l: va_list arguments from _printf
 * @f: Pointer to the struct fmt_flags
 * Return: Number of characters printed
 */
int print_char(va_list l, fmt_flags_t *f);

/**
 * print_string - Prints a string
 * @l: va_list arguments from _printf
 * @f: Pointer to the struct fmt_flags
 * Return: Number of characters printed
 */
int print_string(va_list l, fmt_flags_t *f);

/**
 * print_percent_symbol - Prints a percent symbol
 * @l: va_list arguments from _printf
 * @f: Pointer to the struct fmt_flags
 * Return: Number of characters printed
 */
int print_percent_symbol(va_list l, fmt_flags_t *f);

/**
 * handle_flags - Update fmt_flags based on format string flags
 * @fmt: Format string
 * @fmt_flags: Pointer to the struct fmt_flags
 *
 * Description: This function scans the format string for flag
 * characters ('+', ' ', '#', '0', '-')
 * and updates the fmt_flags structure accordingly.
 */
void handle_flags(const char *fmt, fmt_flags_t *fmt_flags);

/**
 * handle_length_modifier - Update fmt_flags based on format string
 * length modifiers
 * @fmt: Format string
 * @fmt_flags: Pointer to the struct fmt_flags
 *
 * Description: This function scans the format string for length
 * modifiers ('l', 'h') and
 * updates the fmt_flags structure accordingly.
 */
void handle_length_modifier(const char *fmt, fmt_flags_t *fmt_flags);

/**
 * handle_field_width - Update fmt_flags based on format string
 * field width
 * @fmt: Format string
 * @fmt_flags: Pointer to the struct fmt_flags
 * @args: Variable argument list
 *
 * Description: This function scans the format string for field
 * width and updates the
 * fmt_flags structure accordingly.
 */
void handle_field_width(const char *fmt, fmt_flags_t *fmt_flags);

/**
 * handle_precision - Update fmt_flags based on format string
 * precision
 * @fmt: Format string
 * @fmt_flags: Pointer to the struct fmt_flags
 * @args: Variable argument list
 *
 * Description: This function scans the format string for
 * precision and updates the
 * fmt_flags structure accordingly.
 */
void handle_precision(const char *fmt, fmt_flags_t *fmt_flags);

/**
 * handle_zero_flag - Update fmt_flags based on the '0' flag
 * character
 * @fmt: Format string
 * @fmt_flags: Pointer to the struct fmt_flags
 *
 * Description: This function scans the format string for the '0'
 * flag character
 * and updates the fmt_flags structure accordingly.
 */
void handle_zero_flag(const char *fmt, fmt_flags_t *fmt_flags);

/**
 * handle_minus_flag - Update fmt_flags based on the '-' flag
 * character
 * @fmt: Format string
 * @fmt_flags: Pointer to the struct fmt_flags
 *
 * Description: This function scans the format string for the '-'
 * flag character
 * and updates the fmt_flags structure accordingly.
 */
void handle_minus_flag(const char *fmt, fmt_flags_t *fmt_flags);


#endif

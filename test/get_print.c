#include "main.h"
/**
 * get_print - selects the right printing function passed to _printf
 *
 * @s: character that holds the conversion specifier
 *
 * Description: the function loops through the structs array
 *
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_big},
		{'S', print_bigS},
		{'p', print_address},
		{'r', print_rev},
		{'R', print_rot13}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}

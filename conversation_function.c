#include "main.h"

/**
 * find_conversion_function - provides the required operation.
 * @idnt: operation id.
 * Return: NULL.
 */
char* (*find_conversion_function(char idnt))(va_list)
{
	int var = 0;

	display_t specifier[] = {
		{'o', convert_to_base8},
		{'b', convert_to_base2},
		{'s', s_custom_specifier},
		{'c', c_custom_specifier},
		{'d', d_custom_specifier},
		{'R', cipher_rot13_func},
		{'i', d_custom_specifier},
		{'r', str_reverse_func},
		{'\0', '\0'}
	};

	while (specifier[var].identifier != '\0')
	{
		if (specifier[var].identifier == idnt)
			return (specifier[var].print_function);
		var++;
	}
	return (NULL);
}

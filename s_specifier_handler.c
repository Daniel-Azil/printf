#include "dl_header_file.h"
/**
 * s_custom_specifier - s specifier handler.
 * @catalog_ls: initialised catalog_ls with the function va_list.
 *
 * Return: function named copy_string.
 */
char *s_custom_specifier(va_list catalog_ls)
{
	int size_var;
	char *pointer_1;
	char *pointer_2;

	pointer_2 = va_arg(catalog_ls, char *);
	if (pointer_2 == NULL)
		pointer_2 = "(null)";

	size_var = get_string_length(pointer_2);

	pointer_1 = malloc(sizeof(char) * size_var + 1);
	if (pointer_1 == NULL)
		return (NULL);

	return (copy_string(pointer_1, pointer_2));
}

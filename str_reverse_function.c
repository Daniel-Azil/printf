#include "dl_header_file.h"

/**
 * str_reverse_func - Returns a string in reverse order.
 * @catalog_ls: initialised catalog_ls as given character to reverse.
 *
 * Return: pointer named pointer_2.
 */

char *str_reverse_func(va_list catalog_ls)
{
	char *pointer_1;
	int int_var;
	int total_size;
	int variable = 0;
        char *pointer_2;

	pointer_1 = va_arg(catalog_ls, char *);
	if (pointer_1 == NULL)
		pointer_1 = ")llun(";

	total_size = _strlen(pointer_1);

	pointer_2 = malloc(sizeof(char) * (total_size + 1));
	if (pointer_2 == NULL)
		return (NULL);

	for(int_var = (total_size - 1); int_var >= 0; int_var--)
	{
		pointer_2[variable++] = pointer_1[int_var];
	}
	pointer_2[variable] = '\0';

	return (pointer_2);
}

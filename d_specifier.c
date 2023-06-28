#include "main.h"

/**
 * d_custom_specifier - prototype function.
 * @catalog_ls: initialised variable named catalog_ls with
 * the function named va_list.
 *
 * Return: function named int_string and it's argunments.
 **/
char *d_custom_specifier(va_list catalog_ls)
{
	int al;
	int var;
	int var_2;
	int size;

	var = va_arg(catalog_ls, int);
	var_2 = var;
	al = 1;
	size = 0;

	if (var == 0)
	{
		size++;
		return (int_string(al, size, var));
	}

	while (var_2 != 0)
	{
		size += 1;
		if (size > 1)
			al *= 10;
		var_2 /= 10;
	}

	return (int_string(al, size, var));
}

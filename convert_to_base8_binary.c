#include "dl_header_file.h"

/**
 * convert_to_base8 - Function that changes integer into base 8.
 * @catalog_ls: The variable is initialised as an integer
 * to be turnd to based 8.
 *
 * Return: pointer named pnt.
 */

char *convert_to_base8(va_list catalog_ls)
{
	char *pointer;
	int var;
	int al_var;
	int ld_1 = 0;
	int ld_2 = 1;

	al_var = va_arg(catalog_ls, int);
	var = al_var;

	pointer = malloc(sizeof(char) * 20);
	if (pointer == NULL)
		return (NULL);

	if (al_var < 0)
	{
		pointer[0] = 1 + '0';
		ld_1++;
		al_var *= -1;
		var *= -1;
	}

	while (al_var > 1)
	{
		al_var /= 8;
		ld_2 *= 8;
	}

	while (ld_2 > 0)
	{
		pointer[ld_1++] = (var / ld_2 + '0');
		var %= ld_2;
		ld_2 /= 8;
	}
	pointer[ld_1] = '\0';

	return (pointer);
}

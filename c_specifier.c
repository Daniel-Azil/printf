#include "dl_header_file.h"
/**
 * c_custom_specifier - Handle the specifier %c.
 * @catalog_ls: initialized variable named catalog_ls with va_list function.
 *
 * Return: pointer named pnt.
 */
char *c_custom_specifier(va_list catalog_ls)
{
	char var;
	char *pnt;

	var = va_arg(catalog_ls, int);

	if (var == 0)
		var = '\0';

	pnt = malloc(sizeof(char) * 2);
	if (pnt == NULL)
		return (NULL);
	pnt[0] = var;
	pnt[1] = '\0';

	return (pnt);
}

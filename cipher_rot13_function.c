#include "dl_header_file.h"
/**
 * cipher_rot13_func - Rot13 encryption for string.
 * @catalog_ls: initialised catalog_ls with function named va_list.
 *
 * Return: pnt.
 */
char *cipher_rot13_func(va_list catalog_ls)
{
	char *pnt;
	char *pointer;
	int variable = 0;

	pointer = va_arg(catalog_ls, char *);

	pnt = malloc(sizeof(char) * (get_string_length(pointer) + 1));
	if (pnt == NULL)
		return (NULL);

	while (pointer[variable] != '\0')
	{
		if ((pointer[variable] >= 'a' && pointer[variable] <= 'm') || (pointer[variable] >= 'A' && pointer[variable] <= 'M'))
		{
			pnt[variable] = pointer[variable] + 13;
		}
		else if ((pointer[variable] >= 'n' && pointer[variable] <= 'z') || (pointer[variable] >= 'N' && pointer[variable] <= 'Z'))
		{
			pnt[variable] = pointer[variable] - 13;
		}
		else
			(pnt[variable] = pointer[variable]);
		variable++;
	}
	pnt[variable] = '\0';

	return (pnt);
}

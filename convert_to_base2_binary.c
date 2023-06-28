#include "main.h"

/**
 * convert_to_base2 - Transform the integer into its binary representation.
 * @catalog_ls: initilized the variable catalog_ls with the va_list function.
 *
 * Return: Binary representation in a string.
 */

char *convert_to_base2(va_list catalog_ls)
{
	int handle_neg;
	int var1;
	int var2 = 0;
	int var3;
	int varible_num = 1;
	char *pnt;
	int neg_size_len;

	var3 = va_arg(catalog_ls, int);
	var1 = var3;
	handle_neg = var3 < 0;
	neg_size_len = handle_neg ? 2 : 1;
	while (var3 > 1)
	{
		var3 /= 2;
		varible_num *= 2;
		neg_size_len++;
	}
	pnt = malloc(sizeof(char) * (neg_size_len + 1));
	if (pnt == NULL)
		return (NULL);
	if (handle_neg)
	{
		pnt[0] = '1';
		var2++;
		var1 *= -1;
	}
	while (varible_num > 0)
	{
		pnt[var2++] = (var1 / varible_num + '0');
		var1 %= varible_num;
		varible_num /= 2;
	}
	pnt[var2] = '\0';
	return (pnt);
}

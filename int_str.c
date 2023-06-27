#include "dl_header_file.h"

/**
 * int_string - Turns integer into a string.
 * @al: initialised to 10 as it multiples in the code snippet.
 * @size: digit size.
 * @var: digits to be changed into string from int.
 *
 * Return: pnt.
 **/
char *int_string(int al, int size, int var)
{
	int var_1 = 0;
	char *pnt;

	pnt = malloc(sizeof(char) * size + 2);
	if (pnt == NULL)
		return (NULL);

	if (var < 0)
	{
		pnt[0] = '-';
		var_1++;
	}
	while (var < 0)
	{
		pnt[var_1] = ((var / al) * -1 + '0');
		var = var % al;
		al /= 10;
		var_1++;
	}
	while (al >= 1)
	{
		pnt[var_1] = ((var / al) + '0');
		var = var % al;
		al /= 10;
		var_1++;
	}
	pnt[var_1] = '\0';
	return (pnt);
}

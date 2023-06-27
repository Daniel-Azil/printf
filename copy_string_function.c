#include "dl_header_file.h"

/**
 * copy_string - Function to copy string given.
 * @dga_var: pointer argument in the function copy_string.
 * @_source: pointer argument in the function copy_string.
 *
 * Return: argument pointer initialied in the function.
 */
char *copy_string(char *dga_var, char *_source)
{
	int x = 0;

	while (_source[x] != '\0')
	{
		dga_var[x] = _source[x];
		x++;
	}

	dga_var[x] = _source[x];
	return (dga_var);
}

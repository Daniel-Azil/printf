#include "dl_header_file.h"
/**
 * get_string_length - returns integer of size of strings.
 * @_string: initialised variable named _string.
 *
 * Return: integer var.
 */
int get_string_length(char *_string)
{
	int var = 0;

	while (*(_string + var))
		var++;

	return (var);
}

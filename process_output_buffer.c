#include "dl_header_file.h"
/**
 * process_output_buffer - writes the contents of _buff_cache to the output,
 * then frees the allocated memory for _buff_cache and va_list.
 *
 * @_buff_cache: _buff_cache stores the display_t(s) to
 * facilitate rendering.
 * @size: size of given string.
 *
 * @catalog_ls: initialised catalog_ls with va_list function.
 *
 * Return: No returns.
 */
void process_output_buffer(char *_buff_cache, int size, va_list catalog_ls)
{
	char *pnt;

	pnt = realloc(_buff_cache, size);
	write(1, pnt, size);

	free(pnt);
	va_end(catalog_ls);
}

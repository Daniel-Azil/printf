#include "dl_header_file.h"

/**
 * handles_buffer - Reset length to 0, start writing at buff_cache In 
 * the case of exceeding the buffer cache space
 *
 * @buff_cache: _buff_cache contains printable string.
 * @size: Within _buff_cache, at the specified position.
 * Return: size of the custom buffer handler function.
 */
int handles_buffer(char *_buff_cache, int size)
{
        if (size > 1500)
        {
                write(1, _buff_cache, size);
                size = 0;
        }
        return (size);
}
